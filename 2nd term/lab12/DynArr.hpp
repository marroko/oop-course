#ifndef DynArray_h
#define DynArray_h

#include <iostream>

template<typename T>
class DynArray {

public:

	//typedef T* Iterator; // prostszy sposob

	struct Iterator {

		Iterator(T *assignable) : ptr(assignable) {}

		void operator++() { ptr++; }
		bool operator!=(const Iterator &it) { return ptr != it.ptr; }
		T* operator->() { return ptr; }
		T operator*() { return *ptr; }

		void append(T value) { *ptr += value; }

		T *ptr;
	};

	DynArray(int size) : _size(size) { arr = new T[size]; }
	DynArray(int size, const T *staticArray) : _size(size) { 

		arr = new T[size]; 
		for(int i = 0; i < size; ++i)
			arr[i] = staticArray[i];
		}
	~DynArray() { delete [] arr; }

	T & operator[](int index) { return arr[index]; }
	const T & operator[](int index) const { return arr[index]; }

	int size() const { return _size; }

	Iterator begin() { return Iterator(arr); }
	Iterator end() { return Iterator(arr + _size); }

private:

	int _size;
	T *arr;

};

template<typename T>
std::ostream & operator<<(std::ostream &buffer, const DynArray<T> &array) {

	int range = array.size();

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