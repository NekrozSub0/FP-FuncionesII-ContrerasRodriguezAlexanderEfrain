//Juego de Piedra, Papel y Tijeras
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int jugadajugador, jugadacomputadora, victoriasjugador=0, victoriascomputadora=0;
	srand(time(0));
	//ENTRADA Y PROCESO
	for(int i=1;i<=3;i++){
	jugadacomputadora=rand()%(3);
	cout<<"Ingrese su jugada (Piedra=0, Papel=1, Tijera=2)"<<endl;
	cin>>jugadajugador;
	cout<<"La computadora elige: "<<jugadacomputadora<<endl;
	switch(jugadajugador){
		case 0:
		switch(jugadacomputadora){
			case 0:
				cout<<"EMPATE"<<endl;
				break;
			case 1:
				cout<<"COMPUTADORA GANA"<<endl;
				victoriascomputadora=victoriascomputadora+1;
				break;
			case 2:
				cout<<"JUGADOR GANA"<<endl;
				victoriasjugador=victoriasjugador+1;
				break;
			default:
				cout<<"Error en jugada"<<endl;
			break;
			}
		break;
		case 1:
		switch(jugadacomputadora){
			case 0:
				cout<<"JUGADOR GANA"<<endl;
				victoriasjugador=victoriasjugador+1;
				break;
			case 1:
				cout<<"EMPATE"<<endl;
				break;
			case 2:
				cout<<"COMPUTADORA GANA"<<endl;
				victoriascomputadora=victoriascomputadora+1;
				break;	
			default:
				cout<<"Error en jugada"<<endl;
			break;
			}
		break;
		case 2:
		switch(jugadacomputadora){
			case 0:
				cout<<"COMPUTADORA GANA"<<endl;
				victoriascomputadora=victoriascomputadora+1;
				break;
			case 1:
				cout<<"JUGADOR GANA"<<endl;
				victoriasjugador=victoriasjugador+1;
				break;
			case 2:
				cout<<"EMPATE"<<endl;
				break;
			default:	
				cout<<"Error en jugada"<<endl;	
			break;
			}
		break;
		default:
			cout<<"Error en jugada"<<endl;
		break;
		}
	}
	//SALIDA
	if(victoriasjugador>victoriascomputadora){
		cout<<"GANA EL JUGADOR, RONDAS GANADAS: "<<victoriasjugador<<endl;
	} if(victoriascomputadora>victoriasjugador){
		cout<<"GANA LA COMPUTADORA, RONDAS GANADAS: "<<victoriascomputadora<<endl;
	} else {
		cout<<"EL RESULTADO ES UN EMPATE"<<endl;
	}
	cout<<"PUNTOS: "<<endl;
	cout<<"Victorias jugador: "<<victoriasjugador<<endl;
	cout<<"Victorias computadora: "<<victoriascomputadora<<endl;
	return 0;
}