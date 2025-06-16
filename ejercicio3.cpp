//Cálculo de la Hipotenusa
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double cateto1, cateto2, hipotenusa;
	//Entrada
	cout<<"Ingrese el valor del cateto 1"<<endl;
	cin>>cateto1;
	cout<<"Ingrese el valor del cateto 2"<<endl;
	cin>>cateto2;
	//Proceso
	hipotenusa=sqrt(pow(cateto1, 2) + pow(cateto2, 2));
	//Salida
	cout<<"El valor de la hipotenusa es: "<<hipotenusa<<endl;
	return 0;
}