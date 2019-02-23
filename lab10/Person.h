#ifndef Person_h
#define Person_h

#include <iostream>
#include <string>

class Person {

public:

    typedef const Person CPerson;
    typedef bool (*comparator)(CPerson& p1, CPerson& p2);

    Person(const char *whichName, int years);
    ~Person() = default;

    static bool byID(CPerson& p1, CPerson& p2);
    static bool byName(CPerson& p1, CPerson& p2);
    static CPerson ** sort(CPerson *start[4], comparator cmp);
    void swapID(CPerson *whoSwapped) const;
	void print() const;

	operator std::string() const;

private:

    std::string name;
    int age;
	mutable int id;
    static int whichPerson;

};

#endif
