#ifndef Data_h
#define Data_h

#include <iostream>

class Data {

public:

    virtual ~Data() = default;

    virtual void print() const = 0;
    virtual bool equal(const Data *dat) const = 0;
    virtual Data * copy() const = 0;

};

class IntData : public Data {

public:

    IntData(int inserted) : value(inserted) {}
    virtual ~IntData() override { std::cout << "~IntData()\n"; }

    virtual void print() const override { std::cout << value << " "; }
    virtual bool equal(const Data *data) const override;
    virtual IntData * copy() const override;
    int getValue() { return value; }

private:

    int value;

};

class FloatData : public Data {

public:

    FloatData(float inserted) : value(inserted) {}
    virtual ~FloatData() override { std::cout << "~FloatData()\n"; }

    virtual void print() const override { std::cout << value << " "; }
    virtual bool equal(const Data *data) const override;
    virtual FloatData * copy() const override;
    float getValue() { return value; }

private:

    float value;

};

class StringData : public Data {

public:

    StringData(const std::string &inserted) : value(inserted) {}
    virtual ~StringData() override { std::cout << "~StringData()\n"; }

    virtual void print() const override { std::cout << value << " "; }
    virtual bool equal(const Data *data) const override;
    virtual StringData * copy() const override;
    std::string getValue() { return value; }

private:

    std::string value;

};

#endif
