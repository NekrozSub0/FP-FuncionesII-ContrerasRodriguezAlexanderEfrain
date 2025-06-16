//Juego de Dados por Turnos
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int jugadap1, jugadap2, victoriasp1=0, victoriasp2=0;
	int montodado1, montodado2;
	int aux;
	srand(time(0));
	//ENTRADA Y PROCESO
	for(int i=1;i<=3;i++){
		cout<<"Jugador 1, lanza el dado (presione 0)"<<endl;
		cin>>aux;
		montodado1=rand()%6+1;
		cout<<"Jugador 1 obtuviste: "<<montodado1<<endl;
		cout<<"Jugador 2, lanza el dado (presione 0)"<<endl;
		cin>>aux;
		montodado2=rand()%6+1;
		cout<<"Jugador 2 obtuviste: "<<montodado2<<endl;	
		if(montodado1>montodado2){
			cout<<"Ronda ganada x jugador 1"<<endl<<endl;
			victoriasp1=victoriasp1+1;
			cout<<"___MARCADOR___"<<endl;
			cout<<"Jugador 1: "<<victoriasp1<<endl;
			cout<<"Jugador 2: "<<victoriasp2<<endl;
			cout<<"____________"<<endl;
		} if(montodado2>montodado1){
			cout<<"Ronda ganada x jugador 2"<<endl<<endl;
			victoriasp2=victoriasp2+1;
			cout<<"___MARCADOR___"<<endl;
			cout<<"Jugador 1: "<<victoriasp1<<endl;
			cout<<"Jugador 2: "<<victoriasp2<<endl;		
			cout<<"____________"<<endl;						
		} if(montodado1==montodado2) {
			cout<<"Empate"<<endl<<endl;
			cout<<"___MARCADOR___"<<endl;
			cout<<"Jugador 1: "<<victoriasp1<<endl;
			cout<<"Jugador 2: "<<victoriasp2<<endl;		
			cout<<"____________"<<endl;			
		}
	}

	//SALIDA
	if(victoriasp1>victoriasp2){
		cout<<"JUGADOR 1 GANA EL JUEGO"<<endl;
		cout<<"____________"<<endl;	
	} if(victoriasp2>victoriasp1){
		cout<<"JUGAODR 2 GANA EL JUEGO"<<endl;
		cout<<"____________"<<endl;			
	} if(victoriasp1==victoriasp2){
		cout<<"RESULTADO EMPATE"<<endl;
		cout<<"____________"<<endl;	
	}
	return 0;
}