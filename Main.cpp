#include <string>
#include <iostream>
#include "Binario.h"
#include <vector>
#include <stdlib.h>
#include <cstdlib>


using namespace std;

Binario* BinarioAgregar();


int main(){

	vector <Binario*> binario;

	char resp ='s';
	int option;

        while(resp=='s'||resp=='S'){
		
                cout <<"Menu"<<endl;
                cout <<"1-Agregar Binario"<<endl;
                cout <<"2-Hacer Operaciones"<<endl;
                cin>> option;

                switch (option){
                        case 1:{
							//agregar Binarios Aleatorios
                        	binario.push_back(BinarioAgregar());


						break;
						}
			
						case 2:{
							//Hacer operaciones
							 int op;
							 //Primero hay que listar;
							 int size=4;
							 cout <<"Lista de Binarios creados"<<endl;

							 
							 for(int i=0;i<binario.size();i++){
							 		cout<<"Binario "<<i<<endl;
                           			for (int j = 0; j < size; ++j){
                           				cout<<binario[i]->getTabla()[j];
                           	
                           			}
                           			cout<<""<<endl;

                             }

                             cout <<"---------------"<<endl;
                             
                             int pos1, pos2;
                             
                             cout<<"Seleccione una posicion para su primer Binario"<<endl;
                             cin>>pos1;
                             cout<<"Seleccione una posicion para su primer Binario"<<endl;
                             cin>>pos2;

                             

                             cout<<"-----------------"<<endl;

							 cout <<"Operaciones"<<endl;
                			 cout <<"1-Disyuncion"<<endl;
                			 cout <<"2-Conjuncion"<<endl;
                			 cout <<"3-Implicacion"<<endl;
                			 cout <<"4-Doble Implicacion"<<endl;
                			 cout <<"5.Conjuncion exclusiva"<<endl;
                			 cin>> op;

                			 switch(op){

                			 		case 1:{
                			 			//Disyucion
                			 			cout<<"El resultado es: "<<endl;
                             			int * res = *binario[pos1] + *binario[pos2];
                             			for (int i = 0; i < 4; ++i){
                             				cout<< res[i];	
                             			}

                			 		break;
                			 		}

                			 		case 2:{
                			 			//conjucion 
                			 			cout<<"El resultado es: "<<endl;
                             			int * res = *binario[pos1] - *binario[pos2];
                             			for (int i = 0; i < 4; ++i){
                             				cout<< res[i];	
                             			}

                			 		break;	
                			 		}

                			 		case 3:{
                			 			cout<<"El resultado es: "<<endl;
                             			int * res = *binario[pos1] * *binario[pos2];
                             			for (int i = 0; i < 4; ++i){
                             				cout<< res[i];	
                             			}

                			 		break;	
                			 		}

                			 		case 4:{

                			 			cout<<"El resultado es: "<<endl;
                             			int * res = *binario[pos1] / *binario[pos2];
                             			for (int i = 0; i < 4; ++i){
                             				cout<< res[i];	
                             			}


                			 		break;
                			 		}

                			 		case 5:{
                			 				cout<<"El resultado es: "<<endl;
                             					int * res = *binario[pos1] ^ *binario[pos2];
                             					for (int i = 0; i < 4; ++i){
                             						cout<< res[i];	
                             				}

                			 			break;
                			 		}

                			 }


						break;
						}
				}

				cout<<"Desea continuar? S o N"<<endl;
            	cin >> resp;
    }        

    cout<<"Bye";
    return 0;
}


Binario* BinarioAgregar(){
	
	int* arreglo = new int [4];
	int binario;

	int random;

	for (int i = 0; i < 4; i++) {
		random = rand() % 2;            
               arreglo[i]=random;  
	}

	Binario* temp = new Binario(arreglo);

	cout<<"Se ha creado la tabla exitosamente"<<endl;


	return temp;
}