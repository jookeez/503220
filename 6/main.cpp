#include <iostream>
#include "clase.h"

using namespace std;

int main(){
	clase otraClase(5);
	std::cout << otraClase.getIncremento() << std::endl;
	std::cout << otraClase.suma(7) << std::endl;
	return 0;
}