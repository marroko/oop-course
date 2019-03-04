#include"Suma.h"
#include<iostream>

float Suma(ciag dane, rozmiarCiagu rozmiar)
{
  std::cout<<"suma: ";
  float suma;
  for (int i = 0; i < rozmiar;)
    suma += dane[++i];
}

