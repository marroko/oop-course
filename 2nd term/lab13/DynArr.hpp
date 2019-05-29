#ifndef DynArray_h
#define DynArray_h

#include <iostream>
#include <type_traits>
#include <cstring>

template<typename T, bool isPOD>
struct CopyMaker {

	static void copy(T &destination, T &source) {}
};

template<typename T>
struct CopyMaker<T, true> {

	static void copy(T &destination, T &source) { memcpy(&destination, &source, sizeof(destination)); }
};

template<typename T>
struct CopyMaker<T, false> {

	static void copy(T &destination, T &source) { destination = source; }

};

template<typename T>
class DynArray {

public:

	DynArray() = default;
	DynArray(int size) : _size(size) { arr = new T[size]; }
	~DynArray() { delete [] arr; }

	T & operator[](int index) { return arr[index]; }
	const T & operator[](int index) const { return arr[index]; }
	T & operator=(const T &copied) {

		if(std::is_trivially_constructible<T>::value) {

			memcpy(this->arr, copied.arr, sizeof(this->arr));
			_size = copied.size;
		}
	}

	int size() const { return _size; }
	void expandAndSet(T value) {

		if(_size++ == 0) {

			this->arr = new T;
			CopyMaker<T, std::is_trivially_copyable<T>::value>::copy(this->arr[_size-1], value);
		}
		else {

			T *ptr = this->arr;

			if(!ptr)
				return;

			(_size == 1) ? delete this->arr : delete [] this->arr;

			this->arr = new T[++_size];

			for(int i = 0; i < _size-1; ++i)
				CopyMaker<T, std::is_trivially_constructible<T>::value>::copy(this->arr[i], ptr[i]);

			CopyMaker<T, std::is_trivially_constructible<T>::value>::copy(this->arr[_size-1], value);

			(_size == 1) ? delete ptr : delete [] ptr;
		}
	}


private:

	int _size = 0;
	T *arr = nullptr;
};

template<typename T>
std::ostream & operator<<(std::ostream &buffer, const DynArray<T> &array) {

	int range = array.size();

	if(range == 0) {

		buffer << "{}";
		return buffer;
	}

	buffer << '{';

	for(int i = 0; i < range; ++i) {

		if(i == range - 1)
			buffer << "\"" << array[i] << "\"";
		else
			buffer << "\"" << array[i] << "\",";
	}

	buffer << '}';
	return buffer;
}

#endif
