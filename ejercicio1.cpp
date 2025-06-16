//Algoritmo Cálculo del Área de un Círculo
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double areacirculo, radio;
	//Entrada
	cout<<"Ingrese el radio del circulo"<<endl;
	cin>>radio;
	//Proceso
	areacirculo=(M_PI*(pow(radio,2)));
	//Salida
	cout<<"El area del ciruclo es: "<<areacirculo<<endl;
	return 0;
}