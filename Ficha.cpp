#include "Ficha.h"

Ficha::Ficha() {}
Ficha::Ficha(char c) {
	figura = c; 
}

void Ficha::setFigura(char c) {
	figura = c;
}

char Ficha::getFigura() {
	return figura;
}

bool Ficha::compare(Ficha f) {
	if(f.figura==figura)
		return true;
	else return false; 
	
}
