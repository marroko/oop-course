#ifndef ClonesF_h
#define ClonesF_h

#include <vector>
#include <iostream>

struct BaseWrapper {

	virtual ~BaseWrapper() = default;
};

/* @struct Wrapper 
   @brief sluzy realizacji polimorficznego zachowania fabryki w liniach 42, 45, 48 */
template<typename T>
struct Wrapper : BaseWrapper {

	Wrapper(T object) : _object(object) {}

	T _object;
};

/* @struct missing 
   @brief obsluguje wyjatek w razie gdy probujemy sklonowac obiekt, ktorego nie ma w fabryce */
template<typename T>
struct missing {};

/* @class ClonesF
   @brief pozwala na konstrukcje/klonowanie/przechowywanie obiektow dowolnego typu */
class ClonesF {

public:

	ClonesF() = default;
	~ClonesF();

	/* @fn add
	   @brief dodaje obiekt dowolnego typu do kontenera
	   @warning nalezy zwolnic pamiec przy destrukcji kontenera */
	template<typename T>
	void add(T object) { _objects.push_back(new Wrapper<T>(object)); }

	/* @fn clone
	   @brief szuka w kontenerze pierwszego obiektu typu T
	   @brief w przypadku niepowodzenia rzuca wyjatek szablonowy*/
	template<typename T>
	T clone() {

		Wrapper<T> *ptr = nullptr;

		for(auto & i : this->_objects) {

			ptr = dynamic_cast<Wrapper<T> *>(i);

			if(ptr)
				return ptr->_object;
		}
		throw missing<T>();
	}

private:

	std::vector<BaseWrapper *> _objects;

};

#endif