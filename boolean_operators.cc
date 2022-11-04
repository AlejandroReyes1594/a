/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file boolean_operators.cc
  * @author Alejandro Baltasar Reyes López alu0101552316@ull.edu.es
  * @date Nov 3 2022
  * @brief The program shows the truth table of the logical operators (and, or, not) of C++.
  * @bug There are no known bugs
  * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
  */


#include <iostream>

using namespace std;

int main() {
	bool p, q;
	cout << "p  q  and   or  !p !q \n" << endl;
	cout << false << "  " << false << "    " << (false && false) << "   " <<(false || false) <<"   "<<!false<<"   "<<!false <<endl;
        cout << false << "  " << true  << "    " << (false && true) << "   " <<(false || true) <<"   "<<!false<<"   "<<!true <<endl;
        cout << true << "  " << false  << "    " << (true && false) << "   " <<(true || false) <<"   "<<!true<<"   "<<!false <<endl;
        cout << true << "  " << true  << "    " << (true && true) << "   " <<(true || true) <<"   "<<!true<<"   "<<!true <<endl;
}
