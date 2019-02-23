#ifndef StringWrapper_h
#define StringWrapper_h

#include <iostream>
#include <string.h>

class StringWrapper {

public:

    friend std::ostream & operator<<(std::ostream &buffer, StringWrapper output);
    friend StringWrapper operator*(int howMany, const StringWrapper multiplied);
    friend StringWrapper operator*(const StringWrapper multiplied, int howMany);

    StringWrapper(const char *input = nullptr);
    StringWrapper(const StringWrapper &copied);
	~StringWrapper();

    bool operator==(const StringWrapper &compared) const;
    StringWrapper & operator=(StringWrapper string);
    StringWrapper operator+(const char *text) const;
    StringWrapper operator+(const StringWrapper added) const;

    char * makeBuffer(StringWrapper &str, unsigned int length) const;

private:

    char *myText = nullptr;

};

std::ostream & operator<<(std::ostream &buffer, StringWrapper output);

StringWrapper operator*(int howMany, const StringWrapper multiplied);
StringWrapper operator*(const StringWrapper multiplied, int howMany);

#endif
