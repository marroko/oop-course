#include "StringWrapper.h"

std::ostream & operator<<(std::ostream &buffer, StringWrapper output) {

    buffer << output.myText;
    return buffer;
}

StringWrapper operator*(int howMany, const StringWrapper multiplied) {

    StringWrapper str;
    str.myText = new char[howMany + 1]();

    for(int i=0; i<howMany; i++) {

        strcat(str.myText, multiplied.myText);
	}

    str.myText[howMany] = '\0';

    return str;
}

StringWrapper operator*(const StringWrapper multiplied, int howMany) {

    StringWrapper str;
    unsigned int length = howMany * strlen(multiplied.myText) + 1;

    str.myText = new char[length]();

    for(int i=0; i < howMany; i++)
        strcat(str.myText, multiplied.myText);

    str.myText[length-1] = '\0';

    return str;
}

StringWrapper::StringWrapper(const StringWrapper &copied){

    myText = new char[strlen(copied.myText) + 1];
    strcpy(myText, copied.myText);
    myText[strlen(copied.myText)] = '\0';
}

StringWrapper::StringWrapper(const char *input) {

    if(input) {

        myText = new char[strlen(input) + 1];
        strcpy(myText, input);
        myText[strlen(input)] = '\0';
	}
}

StringWrapper::~StringWrapper() { delete [] myText; }

bool StringWrapper::operator==(const StringWrapper &compared) const {

    return (strcmp(myText, compared.myText) ? false : true);
}

StringWrapper & StringWrapper::operator=(StringWrapper string) {

    delete [] myText;

    unsigned int length = strlen(string.myText) + 1;
    myText = new char[length];
    strcpy(myText, string.myText);

    myText[length-1] = '\0';

	return *this;
}

StringWrapper StringWrapper::operator+(const char *text) const{

    StringWrapper str;
    unsigned int length = strlen(myText) + strlen(text) + 1;

    char *buffer = makeBuffer(str, length);

    strcat(str.myText, text);
    str.myText[length-1] = '\0';

    delete [] buffer;
    return str;
}

StringWrapper StringWrapper::operator+(const StringWrapper added) const {

    StringWrapper str;
    unsigned int length = strlen(myText) + strlen(added.myText) + 1;

    char *buffer = makeBuffer(str, length);

    strcat(str.myText, added.myText);
    str.myText[length-1] = '\0';

    delete [] buffer;
    return str;
}

char * StringWrapper::makeBuffer(StringWrapper &str, unsigned int length) const {

    char *buffer;
    buffer = new char[strlen(myText) + 1];
    strcpy(buffer, myText);
    buffer[strlen(myText)] = '\0';

    str.myText = new char[length];
    strcpy(str.myText, buffer);

    return buffer;
}
