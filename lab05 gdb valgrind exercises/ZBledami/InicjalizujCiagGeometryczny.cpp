#include"InicjalizujCiagGeometryczny.h"

const ciag InicjalizujCiagGeometryczny (rozmiarCiagu rozmiar, float skok)
{
  int g_ileCiagow;
  ciag* ga_usunac;
  
  ciag wynik = new typCiagu[rozmiar];
  int i = 0;
  wynik[i] = 1;
  i = i + 1;
  do {
    wynik[i] = wynik[i-1]*skok;
    i = i + 1;
  } while (i < rozmiar);

  ciag* stare = ga_usunac;
  ga_usunac = new ciag[g_ileCiagow];

  for (int i = 0; i < g_ileCiagow - 1; ++i)
    ga_usunac[i] = stare[i];
    
  ga_usunac[g_ileCiagow-1] = wynik;
  delete [] wynik;

  g_ileCiagow++;
  
  return ga_usunac[g_ileCiagow-1];
}
