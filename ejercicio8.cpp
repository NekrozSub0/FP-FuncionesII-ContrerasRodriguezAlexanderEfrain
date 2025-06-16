//Tragamonedas Simple
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int monedas=100, apuesta, turno=1, decision=1;
	int numeroaleatorio1, numeroaleatorio2, numeroaleatorio3;
	while(decision!=2){
	cout<<"Seleccione una opcion"<<endl;
	cout<<"1. Apostar"<<endl<<"2. Salir"<<endl;
	cin>>decision;
	srand(time(0));
	switch(decision){
		case 1:
			cout<<endl<<"TURNO "<<turno<<endl;
			turno=turno+1;			
			cout<<endl<<"Ingrese su apuesta"<<endl;
			cin>>apuesta;	
			numeroaleatorio1=rand()%5+1;
			numeroaleatorio2=rand()%5+1;	
			numeroaleatorio3=rand()%5+1;	
			cout<<"Numero aleatorio 1: "<<numeroaleatorio1<<endl;
			cout<<"Numero aleatorio 2: "<<numeroaleatorio2<<endl;
			cout<<"Numero aleatorio 3: "<<numeroaleatorio3<<endl;		
		break;
		case 2:
			break;
		break;
		default:
			cout<<endl<<"ERROR: Ingrese una opcion valida"<<endl<<endl;
		break;			
	}

	}
	cout<<endl<<"RESULTADO"<<endl<<"MONEDAS: "<<monedas<<endl<<"____________"<<endl;
	return 0;
}