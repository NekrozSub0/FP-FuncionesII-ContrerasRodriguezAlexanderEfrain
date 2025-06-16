//Cálculo de raíces de una Ecuación Cuadrática
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a, b, c;
	double raiz1, raiz2;
	//Entrada
	cout<<"Ingrese el valor del coeficiente a: "<<endl;
	cin>>a;
	cout<<"Ingrese el valor del coeficiente b: "<<endl;
	cin>>b;
	cout<<"Ingrese el valor del coeficiente c: "<<endl;
	cin>>c;
	//Proceso
	raiz1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
	raiz2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
	//Salida
	if(a==0){
		cout<<"Error en la ecuacion"<<endl;
	}else {
	cout<<"Las raices son: "<<raiz1<<" y "<<raiz2;
	}
	return 0;
}