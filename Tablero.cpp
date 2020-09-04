#include "Tablero.h"

Tablero::Tablero() {}

void Tablero::setFichaIn(int x, int y, char c){
	mapa[x][y]= c; 
}

void Tablero::mostrar() {
	
	int contador=1; 
	cout<<"    A   B   C"<<endl;
	cout<<"  ============="<<endl;
	for(int i=0;i<3;i++){
		cout<<contador++<<" | ";
		for(int j=0;j<3;j++){
			cout<<mapa[i][j].getFigura()<<" | ";
		}
		cout<<endl;
	}
	cout<<"  ============="<<endl;
}





