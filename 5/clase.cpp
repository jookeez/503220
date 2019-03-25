#include "clase.h"

clase::clase(int a){
	_a = a;
}

int clase::getIncremento(){
	return _a;
}

int clase::suma(int numero){
	_a += numero;
	return _a;
}