#include "ClonesF.h"

ClonesF::~ClonesF() {

	for(auto & i : this->_objects) 
		delete i;
}