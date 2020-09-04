#include "Juego.h"
#include "conio2.h"
#include <windows.h>


Juego::Juego(){}
//Gestion del juego 
void Juego::play(){ 
	
	Tablero T;	
	//Primera pantalla del juego 
	cout<<"                                                      Bienvenido"<<endl;
	cout<<"                                             Este es el Juego del TA-TE-TI"<<endl;
	cout<<" ====================================================================================================================="<<endl;
	cout<<endl;
	T.setFichaIn(0,0,' '); 
	T.setFichaIn(0,1,' ');
	T.setFichaIn(0,2,' '); 
	T.setFichaIn(1,0,' ');
	T.setFichaIn(1,1,' '); 
	T.setFichaIn(1,2,' ');
	T.setFichaIn(2,0,' '); 
	T.setFichaIn(2,1,' ');
	T.setFichaIn(2,2,' '); 
	T.mostrar();
	//Opciones disponibles
	cout<<endl;
	cout<<"Para la posicion A-1 presiona 1: "<<endl;
	cout<<"Para la posicion B-1 presiona 2: "<<endl;
	cout<<"Para la posicion C-1 presiona 3: "<<endl;
	cout<<"Para la posicion A-2 presiona 4: "<<endl;
	cout<<"Para la posicion B-2 presiona 5: "<<endl;
	cout<<"Para la posicion C-2 presiona 6: "<<endl;
	cout<<"Para la posicion A-3 presiona 7: "<<endl;
	cout<<"Para la posicion B-3 presiona 8: "<<endl;
	cout<<"Para la posicion C-3 presiona 9: "<<endl;

	//COMIENZA LA LOGICA DEL JUEGO
	//Controla el flujo constante 
	while(seguir){
		//controla el flujo la jugada de J2
		do{
				//Si jugador gana, cualquiera que sea, se cancela el flujo de todo el juego. 
				if(cont_Gano==1){
					seguir=false; 
				}else if(contador_j2<5){
						//Si alguna de las teclas ya se usó, se muestra cartel que indica al usuario que elija otra opcion disponible. 
						if((j2==j1)&& ((tec_sinUsar[0]==false) || (tec_sinUsar[1]==false) || (tec_sinUsar[2]==false) || (tec_sinUsar[3]==false) || (tec_sinUsar[4]==false) || (tec_sinUsar[5]==false) || (tec_sinUsar[6]==false) || (tec_sinUsar[7]==false) || (tec_sinUsar[8]==false))){
							cout<<"Esa posicion ya esta ocupada, intente nuevamente con las opciones disponibles. "<<endl;
						}
						cout<<endl;
						//Aclaracion: (Por pantalla se lo nombra como jugador 1, pero en el codigo es j2). 
						cout<<"Turno del Jugador 1: O "<<endl<<endl; 
						cout<<endl;
						cout<<"Elije una posicion: "<<endl;
						//Guarda el dato generado por al metodo que ejecuta las teclas. 
						j2=getKey();
						cout<<endl<<endl;
						//Ejecuta la orden de getkey segun el numero de tecla. IDEM a los siguientes. 
						if(j2==1 && j2!=j1 && tec_sinUsar[0]==true){
							//Pinta la ficha O en dicha posicion. Idem las siguientes. 
							T.setFichaIn(0,0,'O');
							//Controlan las salidas de las opciones por pantalla. IDEM los siguientes.  
							opciones[0]=true;
							opciones1[0]=true;
							//Cuenta las jugadas para dar tablero lleno. Idem los siguientes.
							contador_j2++;
							//Contador de opciones para las jugadas que arman TA-TE-TI. IDEM los siguientes. 
							cont_OpJ2[0]+=0.5;
							cont_OpJ2[3]+=3;
							cont_OpJ2[6]+=6;
							//Controla las teclas usadas para que no puedan volver a ejecutarse. IDEM los siguientes. 
							tec_sinUsar[0]=false; 
							//Controla la jugada del J1 para que no se ejecute hasta que J2 toque una tecla diferente. IDEM los siguientes. 
							jugada_J1=true;
						}
						if(j2==2 && j2!=j1 && tec_sinUsar[1]==true ){
							T.setFichaIn(0,1,'O');
							opciones[1]=true;
							opciones1[1]=true;
							contador_j2++;
							cont_OpJ2[0]+=0.5;
							cont_OpJ2[4]+=4;
							tec_sinUsar[1]=false; 
							jugada_J1=true;
						}
						if(j2==3 && j2!=j1 && tec_sinUsar[2]==true ){
							T.setFichaIn(0,2,'O'); 
							opciones[2]=true;
							opciones1[2]=true;
							contador_j2++;
							cont_OpJ2[0]+=0.5;
							cont_OpJ2[5]+=5;
							cont_OpJ2[7]+=7;
							tec_sinUsar[2]=false; 
							jugada_J1=true;
						}
						if(j2==4 && j2!=j1 && tec_sinUsar[3]==true ){
							T.setFichaIn(1,0,'O');
							opciones[3]=true;
							opciones1[3]=true;
							contador_j2++;
							cont_OpJ2[1]+=1;
							cont_OpJ2[3]+=3;
							tec_sinUsar[3]=false; 
							jugada_J1=true;
							 
						}
						if(j2==5 && j2!=j1 && tec_sinUsar[4]==true ){
							T.setFichaIn(1,1,'O'); 
							opciones[4]=true;
							opciones1[4]=true;
							contador_j2++;
							cont_OpJ2[1]+=1;
							cont_OpJ2[4]+=4;
							cont_OpJ2[6]+=6;
							cont_OpJ2[7]+=7;
							tec_sinUsar[4]=false; 
							jugada_J1=true;
						}
						if(j2==6 && j2!=j1 && tec_sinUsar[5]==true){
							T.setFichaIn(1,2,'O');
							opciones[5]=true;
							opciones1[5]=true;
							contador_j2++;
							cont_OpJ2[1]+=1;
							cont_OpJ2[5]+=5;
							tec_sinUsar[5]=false; 
							jugada_J1=true;
						}
						if(j2==7 && j2!=j1 && tec_sinUsar[6]==true){
							T.setFichaIn(2,0,'O'); 
							opciones[6]=true;
							opciones1[6]=true;
							contador_j2++;
							cont_OpJ2[2]+=2;
							cont_OpJ2[3]+=3;
							cont_OpJ2[7]+=7;
							tec_sinUsar[6]=false; 
							jugada_J1=true;
						}
						if(j2==8 && j2!=j1 && tec_sinUsar[7]==true ){
							T.setFichaIn(2,1,'O');
							opciones[7]=true;
							opciones1[7]=true;
							contador_j2++;
							cont_OpJ2[2]+=2;
							cont_OpJ2[4]+=4;
							tec_sinUsar[7]=false;
							jugada_J1=true;
						}
						if(j2==9 && j2!=j1 && tec_sinUsar[8]==true){
							T.setFichaIn(2,2,'O'); 
							opciones[8]=true;
							opciones1[8]=true;
							contador_j2++;
							cont_OpJ2[2]+=2;
							cont_OpJ2[5]+=5;
							cont_OpJ2[6]+=6;
							tec_sinUsar[8]=false; 
							jugada_J1=true;
						}
						//Se llama al metodo de la funcion tablero para dibujarlo 
						T.mostrar();
						cout<<endl;
						//Opciones desaparecen de pantalla si se los usó. IDEM al resto. 	
						if(opciones[0]==false){
						cout<<"Para la posicion A-1 presiona 1: "<<endl;
						
						}
						if(opciones[1]==false){
						cout<<"Para la posicion B-1 presiona 2: "<<endl;
						
						}
						if(opciones[2]==false){
						cout<<"Para la posicion C-1 presiona 3: "<<endl;
						
						}
						if(opciones[3]==false){
						cout<<"Para la posicion A-2 presiona 4: "<<endl;
						
						}
						if(opciones[4]==false){
						cout<<"Para la posicion B-2 presiona 5: "<<endl;
						
						}
						if(opciones[5]==false){
						cout<<"Para la posicion C-2 presiona 6: "<<endl;
						
						}
						if(opciones[6]==false){
						cout<<"Para la posicion A-3 presiona 7: "<<endl;
						
						}
						if(opciones[7]==false){
						cout<<"Para la posicion B-3 presiona 8: "<<endl;
						
						}
						if(opciones[8]==false){
						cout<<"Para la posicion C-3 presiona 9: "<<endl;
						cout<<endl;
						}
						//Anuncia el GANADOR que se forma en el TA-TE-TI segun la sumas de las opciones ej: op1= 0.5 se suma tres veces, es decir, 1.5 
						if(cont_OpJ2[0]==1.5 || cont_OpJ2[1]==3 || cont_OpJ2[2]==6 || cont_OpJ2[3]==9 || cont_OpJ2[4]==12 || cont_OpJ2[5]==15 || cont_OpJ2[6]==18 || cont_OpJ2[7]==21){
							cout<<"JUGADOR 1 ES EL GANADOR!!! "<<endl<<endl;
							seguir=false;
							jugada_J1=false;
							cont_Gano++;
						}
						
					}
			//Si la tecla de J2, resulta ser igual a la de J1, el bucle se repite hasta ser diferente. 
			}while(j2==j1);	
				//Cuando el tablero se llena marca el fin del juego terminando en EMPATE
				if(contador_j1>=4 && contador_j2>=5 && cont_Gano==0){
					cout<<endl;
					cout<<"Tablero completo, es un EMPATE"<<endl<<endl;
					cout<<"FIN DEL JUEGO"<<endl<<endl; 
					seguir=false;
					jugada_J1=false;
				}
				//Solo se activa la jugada del J1 es verdadera, es decir, el tecleo de J2 fue diferente.
				while(jugada_J1==true){
					if(cont_Gano==1){
						seguir=false; 
					}else if(contador_j1<5){
						if((j2==j1) && ((tec_sinUsar[0]==false) || (tec_sinUsar[1]==false) || (tec_sinUsar[2]==false) || (tec_sinUsar[3]==false) || (tec_sinUsar[4]==false) || (tec_sinUsar[5]==false) || (tec_sinUsar[6]==false) || (tec_sinUsar[7]==false) || (tec_sinUsar[8]==false))){
							cout<<"Esa posicion ya esta ocupada, intente nuevamente con las opciones disponibles. "<<endl;
						}
						cout<<"Turno del Jugador 2: X "<<endl<<endl; 
						cout<<endl;
						cout<<"Elije una posicion: "<<endl;
						j1=getKey();
						cout<<endl<<endl;
							if(j1==1 && j1!=j2 && tec_sinUsar[0]==true ){
								T.setFichaIn(0,0,'X'); 
								opciones1[0]=true;
								opciones[0]=true;
								contador_j1++;
								cont_OpJ1[0]+=0.5;
								cont_OpJ1[3]+=3;
								cont_OpJ1[6]+=6;
								tec_sinUsar[0]=false; 
								jugada_J1=false;
							}
							if(j1==2 && j1!=j2 && tec_sinUsar[1]==true){
								T.setFichaIn(0,1,'X');
								opciones1[1]=true;
								opciones[1]=true;
								contador_j1++;
								cont_OpJ1[0]+=0.5;
								cont_OpJ1[4]+=4;
								tec_sinUsar[1]=false; 
								jugada_J1=false;
							}
							if(j1==3 && j1!=j2 && tec_sinUsar[2]==true){
								T.setFichaIn(0,2,'X'); 
								opciones1[2]=true;
								opciones[2]=true;
								contador_j1++;
								cont_OpJ1[0]+=0.5;
								cont_OpJ1[5]+=5;
								cont_OpJ1[7]+=7;
								tec_sinUsar[2]=false; 
								jugada_J1=false;
							}
							if(j1==4 && j1!=j2 && tec_sinUsar[3]==true){
								T.setFichaIn(1,0,'X');
								opciones1[3]=true;
								opciones[3]=true;
								contador_j1++;
								cont_OpJ1[1]+=1;
								cont_OpJ1[3]+=3;
								tec_sinUsar[3]=false; 
								jugada_J1=false;
							}
							if(j1==5 && j1!=j2 && tec_sinUsar[4]==true ){
								T.setFichaIn(1,1,'X'); 
								opciones1[4]=true;
								opciones[4]=true;
								contador_j1++;
								cont_OpJ1[1]+=1;
								cont_OpJ1[4]+=4;
								cont_OpJ1[6]+=6;
								cont_OpJ1[7]+=7;
								tec_sinUsar[4]=false;  
								jugada_J1=false;
							}
							if(j1==6 && j1!=j2 && tec_sinUsar[5]==true){
								T.setFichaIn(1,2,'X');
								opciones1[5]=true;
								opciones[5]=true;
								contador_j1++;
								cont_OpJ1[1]+=1;
								cont_OpJ1[5]+=5;
								tec_sinUsar[5]=false; 
								jugada_J1=false;
							}
							if(j1==7 && j1!=j2 && tec_sinUsar[6]==true){
								T.setFichaIn(2,0,'X'); 
								opciones1[6]=true;
								opciones[6]=true;
								contador_j1++;
								cont_OpJ1[2]+=2;
								cont_OpJ1[3]+=3;
								cont_OpJ1[7]+=7;
								tec_sinUsar[6]=false;  
								jugada_J1=false;
							}
							if(j1==8 && j1!=j2 && tec_sinUsar[7]==true){
								
								T.setFichaIn(2,1,'X');
								opciones1[7]=true;
								opciones[7]=true;
								contador_j1++;
								cont_OpJ1[2]+=2;
								cont_OpJ1[4]+=4;
								tec_sinUsar[7]=false; 
								jugada_J1=false;
							}
							if(j1==9 && j1!=j2 && tec_sinUsar[8]==true){
								T.setFichaIn(2,2,'X'); 
								opciones1[8]=true;
								opciones[8]=true;
								contador_j1++;
								cont_OpJ1[2]+=2;
								cont_OpJ1[5]+=5;
								cont_OpJ1[6]+=6;
								tec_sinUsar[8]=false;  
								jugada_J1=false;
							}
							T.mostrar();
							cout<<endl;
							if(opciones1[0]==false ){
								cout<<"Para la posicion A-1 presiona 1: "<<endl;
							}
							if(opciones1[1]==false ){
								cout<<"Para la posicion B-1 presiona 2: "<<endl;
							}
							if(opciones1[2]==false ){
								cout<<"Para la posicion C-1 presiona 3: "<<endl;
							}
							if(opciones1[3]==false ){
								cout<<"Para la posicion A-2 presiona 4: "<<endl;
							}
							if(opciones1[4]==false ){
								cout<<"Para la posicion B-2 presiona 5: "<<endl;
							}
							if(opciones1[5]==false ){
								cout<<"Para la posicion C-2 presiona 6: "<<endl;
							}
							if(opciones1[6]==false ){
								cout<<"Para la posicion A-3 presiona 7: "<<endl;
							}
							if(opciones1[7]==false ){
								cout<<"Para la posicion B-3 presiona 8: "<<endl;
							}
							if(opciones1[8]==false ){
								cout<<"Para la posicion C-3 presiona 9: "<<endl;
								cout<<endl;
							}
							if(cont_OpJ1[0]==1.5 || cont_OpJ1[1]==3 || cont_OpJ1[2]==6 || cont_OpJ1[3]==9 || cont_OpJ1[4]==12 || cont_OpJ1[5]==15 || cont_OpJ1[6]==18 || cont_OpJ1[7]==21){
								cout<<"JUGADOR 2 ES EL GANADOR!!! "<<endl<<endl;
								seguir=false;
								jugada_J1=false;
								cont_Gano++;
							}
						}	
				}
	}	
}
//Metodo que controla el flujo de las teclas del 1 al nueve. 
int Juego::getKey(){

	int dato=0;
	while(true){
		if(kbhit()){
			int tecla=getch(); 
			if(tecla==49){
				dato=1;
				return dato;
			}
			if(tecla==50){
				dato=2;
				return dato;
			}
			if(tecla==51){
				dato=3;
				return dato;
			}
			if(tecla==52){
				dato=4;
				return dato;
			}
			if(tecla==53){
				dato=5;
				return dato;
			}
			
			if(tecla==54){
				dato=6;
				return dato;
			}
			if(tecla==55){
				dato=7;
				return dato;
			}
			if(tecla==56){
				dato=8;
				return dato;
			}
			if(tecla==57){
				dato=9;
				return dato;
			}
		}
	}
}


