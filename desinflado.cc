/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file desinflado.cc
  * @author Alejandro Baltasar Reyes López alu0101552316@ull.edu.es
  * @date Nov 3 2022
  * @brief The program reads an uppercase letter and displays it in lowercase
  * @bug There are no known bugs
  * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
  */

#include <iostream>

int main() {
	char mayusc;
	std::cin >> mayusc;
	int n = int(mayusc);
	n = n + 32;
	std::cout << char(n) << std::ends;
}
