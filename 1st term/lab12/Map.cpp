#include "Map.h"

Map::~Map() {

    Pair * current = array;
    Pair * previous = array;

    while (current) {

        current = current->next;
        delete previous;
        previous = current;
	}
}

bool Map::contains(std::string index) const {

    const Pair *ptr = array;

    while(ptr) {

        if(ptr->key == index)
			return true;

        ptr = ptr->next;
	}

	return false;
}

Pair * Map::insert(std::string index, int value) {

    if(array) {

        Pair *ptr = array;
        Pair *ptr_pom = array->next;

        while(ptr_pom) {

            ptr = ptr->next;
            ptr_pom = ptr_pom->next;
		}

        ptr_pom = new Pair;
        ptr_pom->key = index;
        ptr_pom->pairValue = value;

        ptr->next = ptr_pom;

        return ptr_pom;
	}
	else {

        array = new Pair;
        array->key = index;
        array->pairValue = value;

        return array;
	}
}

void Map::print(std::string message) const {

    const Pair *ptr = array;

    while(ptr) {

        std::cout << message << " k: " << ptr->key << " v: " << ptr->pairValue << "\n";
        ptr = ptr->next;
	}
}

int Map::operator[](std::string index) const {

    const Pair *ptr = array;

    while(ptr) {

        if(ptr->key == index)
            return ptr->pairValue;

        ptr = ptr->next;
	}

	return 0;
}

int & Map::operator[](std::string index) {

    Pair *ptr = array;

    while(ptr) {

        if(ptr->key == index)
            return ptr->pairValue;

        ptr = ptr->next;
	}

    Pair *returned = insert(index, 0);

    return returned->pairValue;
}
