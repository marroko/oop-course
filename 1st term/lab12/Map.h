#ifndef Map_h
#define Map_h

#include <string>
#include <iostream>

struct Pair {

	friend class Map;

    std::string key = "";
    int pairValue;
    Pair *next = nullptr;
};

class Map {

public:

	typedef std::string key_type;
	typedef int value_type;

    Map() = default;
	~Map();

    bool contains(std::string index) const;
    Pair * insert(std::string index, int value);
    void print(std::string message) const;

    int operator[](std::string index) const;
    int & operator[](std::string index);

private:
	
    Pair *array = nullptr;
};

#endif
