#ifndef itr_h
#define itr_h

/* @class itr klasa sluzaca do przechodzenia po tablicy intow */

class itr {

public:

    /* @fn operator*
     * @return wartosc znajdujaca sie pod adresem aktualnie trzymanym w wsk
     */
    int operator*() { return *ptr; }

    /* @fn bool
     * @brief mozemy uzywac obiektow klasy do testow logicznych (np. czy osiagneto koniec tablicy)
     */
    operator bool() const { return howMany ? true : false; }

	/* @fn itr 
	 * @param poczatek od ktorego elementu w tablicy zaczniemy iterowac
	 * @param ile jaka ilosc elementow tablicy zostanie przeiterowana
	 */
    itr(int *begin, int count);

	/* @fn operator++
	 * @brief przesuwa wsk na kolejny obiekt w tablicy
	 */
	void operator++();


private:

    int *ptr = nullptr;
    int howMany = 0;

};

#endif
