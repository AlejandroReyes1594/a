#include <cmath>
#include <iostream>
double logbase ( int numero, int base) {return log (numero) / log (base);}
int principal () {
	int operator_1, operator_2;
	std::cin >> operator_1 >> operator_2;
	if (operator_2 == 0) {
	cin operator_2;
}

std::cout << operator_1 << " + " << operator_2 << " = " << operator_1 + operator_2 << endl;
std::cout << operator_1 << " - " << operator_2 << " = " << operator_1 - operator_2 << endl;
std::cout << operator_1 << " * " << operator_2 << " = " << operator_1 * operator_2 << endl;
std::cout << operator_1 << " / " << operator_2 << " = " << operator_1 / operator_2 << endl;
std::cout << operator_1 << " % " << operator_2 << " = " << operator_1 % operator_2 << endl;
std::cout << operator_1 << " ^ " << operator_2 << " = " << pow (operator_1, operator_2) << endl;
std::cout << " log " << operator_1 << "  " << operator_2 << " = "<< logbase (operator_1, operator_2) << endl;
std::cout << operator_1 << " √ " << operator_2 << " = " << pow (operator_2, ( double ) 1 / operator_1)<<endl;
return 0;
}
