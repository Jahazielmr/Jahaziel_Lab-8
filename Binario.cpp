#include "Binario.h"
#include <string>
#include <iostream>

using namespace std;

Binario::Binario(int* Tabla_v){
	this->Tabla_v = Tabla_v;
}

Binario::Binario(){

}

void Binario::setTabla(int* Tabla_v){
   this-> Tabla_v=Tabla_v;
}

int* Binario::getTabla(){
   return this->Tabla_v;
}
/*Binario Binario::getb1(){
   return b1;
}*/


