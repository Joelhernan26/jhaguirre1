#ifndef JUEGO_H
#define JUEGO_H

#include "Tablero.h"


class Juego {
	
private:
	
	int j1=0;
	int j2=0;
	bool tec_sinUsar[9]={true,true,true,true,true,true,true,true,true};
	bool jugada_J1=false; 
	int cont_Gano=0;
	int contador_j1=0;
	int contador_j2=0;
	float cont_OpJ1[8]={0,0,0,0,0,0,0,0};
	float cont_OpJ2[8]={0,0,0,0,0,0,0,0};
	bool seguir=true;
	bool opciones[9]={false}; 
	bool opciones1[9]={false};
public:
	
	//Controla las teclas que se usan.
	int getKey();
	Juego();
	//Ejecuta la logica del juego
	void play();
};

#endif

