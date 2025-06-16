//Simulacion de Tragamonedas Simple
#include<iostream>
#include<cmath>
using namespace std;

void calcularRaices(float a,float b,float c,float raiz1,float raiz2,float discriminante){
	discriminante=sqrt(pow(b,2)-4*(a*c));
	raiz1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
	raiz2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
}

int main(){
	float a,b,c,discriminante,raiz1,raiz2;
	cout<<"Ingrese el valor del coeficiente a: "<<endl;
	cin>>a;
	cout<<"Ingrese el valor del coeficiente b: "<<endl;
	cin>>b;
	cout<<"Ingrese el valor del coeficiente c: "<<endl;
	cin>>c;
	calcularRaices(a,b,c,raiz1,raiz2,discriminante);
	if(discriminante>0){
		cout<<"Las raices son: "<<raiz1<<" "<<raiz2<<endl;
	} else if(discriminante==0){
		cout<<"Las raices son iguales: "<<raiz1<<endl;
	} else{
		cout<<"No existen raices reales";
	}
	return 0;
}