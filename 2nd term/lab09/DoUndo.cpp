#include "DoUndo.h"

bool DoUndo::flag = false;

DoUndo::~DoUndo() { 

	if(flag)
		operation->undoOk();
	else
		operation->undoFail();

	delete operation; 
}