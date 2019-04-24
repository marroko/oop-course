#ifndef DoUndo_h
#define DoUndo_h

/* @struct DoUndoAction 
   @brief abstrakcyjna dostarczajaca interfejsu dla operacji */
struct DoUndoAction {

	virtual ~DoUndoAction() = default;
	virtual void dodo() = 0;
	virtual void undoOk() = 0;
	virtual void undoFail() = 0;
};

/* @class DoUndo
   @brief przechowuje flage mowiaca o powodzeniu ostatniej operacji 
   @brief pozwala odwolac ostatnia operacje, gdy wystapily komplikacje (np. linia 53) */
class DoUndo {

public:

	DoUndo(DoUndoAction *op) : operation(op) { op->dodo(); flag = false; }
	virtual ~DoUndo();

	/* @fn allok
	   @brief koniecznie wywolujemy ja na rzecz klasy po zakonczeniu operacji */
	static void allok() { flag = true; }

private:

	static bool flag;
	DoUndoAction *operation;

};

/* @class KeepInt 
   @brief przechowuje aktualny stan konta - w razie niepowodzenia operacji przywraca go do stanu poczatkowego
   @brief hierarchia dziedziczenia wynika z linii 18, 35, 37-38 */
class KeepInt : public DoUndoAction {

public:

	KeepInt(int &value) : baseValue(value), previous(value) {}
	virtual ~KeepInt() = default;

	virtual void dodo() {}
	virtual void undoOk() {}
	virtual void undoFail() { previous = baseValue; }

private:

	const int baseValue;
	int &previous;
};

#endif