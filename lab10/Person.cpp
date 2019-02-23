#include "Person.h"

int Person::whichPerson = 0;

Person::Person(const char *whichName, int years)
    : name(whichName),
      age(years),
      id(Person::whichPerson++) {}

bool Person::byID(CPerson &p1, CPerson &p2) {

    return (p1.id > p2.id);
}

bool Person::byName(CPerson &p1, CPerson &p2) {

    return (p1.name > p2.name);
}

const Person ** Person::sort(CPerson *start[4], comparator cmp) {

    CPerson **array = new CPerson*[4];

    for(int i=0; i < 4; i++)
        array[i] = start[i];

    for(int i=0; i < 4; i++)  {

        for(int j=0; j < 3; j++) {

            if( cmp(*array[j], *array[j+1]) )
                std::swap(array[j], array[j+1]);
        }
    }

    return array;
}

void Person::swapID(CPerson *whoSwapped) const {

    int buffer = id;
    id = whoSwapped->id;
    whoSwapped->id = buffer;
}

void Person::print() const {

    std::cout << name << " lat: " << age << " ID: " << id << "\n";
}

Person::operator std::string() const {

    using namespace std;

    string str = name + " " + to_string(age) + " " + to_string(id);

	return str;
}
