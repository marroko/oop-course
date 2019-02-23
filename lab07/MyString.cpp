#include <iostream>
#include "MyString.h"

MyString::MyString(const char *lancuch) {

    size = strlen(lancuch) + 1;
    text = new char[size];

    strcpy(text, lancuch);
    text[size-1] = '\0';
}

MyString::~MyString() {

    std::cout << "- deleting " << text << std::endl;
    delete [] text;
}

void MyString::swapMyString(MyString &s2) {

    char *bufor = text;
    text = s2.text;
    s2.text = bufor;
}

void MyString::join(const MyString &lancuch) {

    size += strlen(lancuch.text);

    char* helpful = new char[strlen(lancuch.text)+1];
    strcpy(helpful, text);

    delete [] text;
    text = new char[size];

    strcpy(text, helpful);
    strcat(text, lancuch.text);
    text[size-1] = '\0';

    delete [] helpful;

}

void MyString::replace(const char *lancuch) {

    size = strlen(lancuch) + 1;

    delete [] text;
    text = new char[size];

    strcpy(text, lancuch);
    text[size-1] = '\0';
}
