#include<iostream>

#include"Functions.h"

int main ()
{
  int age;
  int knowledge;
  int creativity;

  age = 21;
  knowledge = 18;
  creativity = 79;

  PrintStats (age, knowledge, creativity);

  GetOlder (age, knowledge, creativity);

  const int maxAge = 30;
  while (age < maxAge) {
    GetOlder (knowledge, age, creativity);
    std::cout<<"Another year passed\n";
  }

  PrintStats (age, knowledge, creativity);
    
  return 0;
}
