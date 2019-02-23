#ifndef numutils_h
#define numutils_h

/* @nspace numutils zawiera struktury bedace schematami funktorow */

namespace numutils {

	/* @struct sum przechowuje sume elementow tablicy */

	struct sum {
		
		/* @fn operator()
		 * @brief dodaje wartosc do aktualnej sumy
		 */
        void operator()(int value) { summary += value; }

		/* @fn result
		 * @return przechowywana suma
		 */
        int result() { return summary; }

        int summary = 0;
	};

	/* @struct average liczy srednia arytmetyczna elementow tablicy */

	struct average {
		
		/* @fn operator()
		 * @brief dodaje wartosc do aktualnej sumy
		 */
        void operator()(int value);

		/* @fn result
		 * @return wyliczona srednia
		 */
        double result() { return (sum / howMany); }

        double sum = 0.0;
        int howMany = 0;
	};
}

#endif
