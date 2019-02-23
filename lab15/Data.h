#ifndef Data_h
#define Data_h

#include <iostream>

class Data {

public:

    Data() = default;
    virtual void print() const = 0;
	virtual ~Data() = default;

};

class IntData : public Data {

public:

    IntData(int inserted) : value(inserted) {}
	~IntData() { std::cout << "~IntData()\n"; }

    virtual void print() const { std::cout << value << " "; }
    int getValue() { return value; }

private:

    int value;

};

class FloatData : public Data {

public:

    FloatData(float inserted) : value(inserted) {}
    ~FloatData() { std::cout << "~FloatData()\n"; }

    virtual void print() const { std::cout << value << " "; }
    float getValue() { return value; }

private:

    float value;

};

class StringData : public Data {

public:

    StringData(const char *inserted) : value(inserted) {}
	~StringData() { std::cout << "~StringData()\n"; }

    virtual void print() const { std::cout << value << " "; }
    std::string getValue() { return value; }

private:

    std::string value;

};

#endif
