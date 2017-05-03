#include <iostream>
#include "Company.h"




int main(){

	Company nova("teste", "testecondutores.txt", "testelinhas.txt");
	nova.displayDrivers();
	nova.displayLines();
	int a;
	cin >> a;
  return 0;
}
