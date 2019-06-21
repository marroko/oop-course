#pragma once

#include "Generators.h"
#include <vector>

//makro sluzace do wygenerowania generatora dla podanych typow
//podane dwa typy w makrze TYPE musza byc ze soba powiazane dziedziczeniem (Type musi dziedziczyc po BaseType)
#define TYPE(BaseType,Type) ( new TGenerator<BaseType, Type>() )

//klasa fabryka sluzaca do generowania nowych obiektow o wczesniej dodanych typach.
template <typename T>
class Factory {

public:
    //metoda sluzaca do dodawania typow obiektow, ktore pozniej bedziemy chcieli stworzyc. Metode nalezy wywolac podajac jako argument
    void preload(Generator<T> *object) { _objects.push_back(object); }

    //zwraca nowy obiekt typu skojarzonego wczesniej z podanym ID. Jesli wczesniej nie dodano takiego typu do Fabryki to metoda zwraca nullptr
	T * produce(const int id) {

		for (const auto & elem : _objects) {

            if (id == elem->getID())
				return elem->getNewObject();
		}
		return nullptr;
	}

    ~Factory() { for (auto & elem : _objects)
                    delete elem; }

private:

	std::vector<Generator<T> *> _objects;
};
