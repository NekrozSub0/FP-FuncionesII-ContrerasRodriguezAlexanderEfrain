//Generador de Números Aleatorios
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int numeromaximo, numeroaleatorio, numerosgenerados;
	//Entrada
	cout<<"Ingrese el numero maximo para generar numeros aleatoriamente"<<endl;
	cin>>numeromaximo;	
	cout<<"Ingrese la cantidad de numeros generados"<<endl;
	cin>>numerosgenerados;
	//Proceso y Salida
	srand(time(NULL));
	for(int i=1;i<=numerosgenerados;i++){
	numeroaleatorio=rand()%(numeromaximo+1);
	cout<<"Numero aleatorio generado: "<<numeroaleatorio<<endl;
	}
	return 0;
}