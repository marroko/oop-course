#ifndef num_h
#define num_h

#include <iostream>

namespace num {

	/* @fn srednia
	   @param size rozmiar przekazywanej tablicy
	   @return srednia wszystkich elementow przekazywanej tablicy dowolnego numerycznego typu */
	template<typename T, const int sizeTab>
	double srednia(const T (&array)[sizeTab], const int size) {

		double sum = 0.;

		for(int i = 0; i < size; ++i)
			sum += array[i];

		return (sum / size);
	}

	/* @fn srednia
	   @return srednia wszystkich elementow przekazywanej tablicy dowolnego numerycznego typu */
	template<typename T, const int size>
	double srednia(const T (&array)[size]) {

		double sum = 0.;

		for(int i = 0; i < size; ++i)
			sum += array[i];

		return (sum / size);
	}

	/* @fn czyWszystkiePierwszwe
	   @brief sprawdza, czy elementy przekazanej tablicy z podanego zakresu sa liczbami pierwszymi
	   @param start indeks poczatku rozwazanego zakresu
	   @param end indeks o jeden wiekszy od konca rozwazanego zakresu */
	template<const int start, const int end, const int size>
	bool czyWszystkiePierwszwe(const int (&array)[size]) {

		for(int i = start; i < end; ++i) {

			for(int j = 2; j < array[i]; ++j) {
				
				if(array[i] % j == 0)
					return false;
			}
		}
		return true;
	}

	inline const char * text(const bool value) {

		return value ? "TRUE" : "FALSE";
	}
}

#endif