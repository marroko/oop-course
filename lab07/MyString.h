#ifndef MyString_h
#define MyString_h

#include <cstring>

class MyString {

public:

    MyString(const char *string);
    ~MyString();

    char * str() { return text; }

    void swapMyString(MyString &s2);

    void join(const MyString &string);

    void replace(const char *string);

private:

    char *text;
    int size;
};

inline void swap(MyString &s1, MyString &s2) { s1.swapMyString(s2); }

#endif
