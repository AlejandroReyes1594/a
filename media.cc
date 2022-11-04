#include <cmath>
#include <iostream>
using namespace std;

int main() {
	float suma=0, num=1,resultado;
	int contador=-1;

	while (num!=0) {
		cout<<"Num: ";
		cin>>num;
		suma+=num;
		contador++;
	}
	resultado=suma/contador;
	cout<<"Resultado: "<<resultado<<endl;

	return 0;
}

