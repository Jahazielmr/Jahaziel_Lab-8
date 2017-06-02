#ifndef BINARIO_H
#define BINARIO_H
#include <string>
#include <iostream>

using namespace std;

class Binario{

  private:
    int* Tabla_v;//inicializar en el main
  public:
    Binario();
    Binario(int*);

    int* getTabla();
    void setTabla(int*);

    Binario getb1();

    //sobrecarga
    

    int* operator+(Binario& rvalue){

          int* arre = new int [4];
          
          for (int i = 0; i < 4; ++i){
              
              if(rvalue.getTabla()[i]+Tabla_v[i]==1){
                  arre[i]=1;

              }  else if(rvalue.getTabla()[i]+Tabla_v[i]==1){
                  arre[i]=0;
              } else if(rvalue.getTabla()[i]+Tabla_v[i]==2){
                  arre[i]=1;
              }

          }

          return arre;

    }

    int* operator-(Binario& rvalue){

          int* arre = new int [4];
          
          for (int i = 0; i < 4; ++i){
              

              if(rvalue.getTabla()[i]-Tabla_v[i]==0){
                  arre[i]=1;

              }  else if(rvalue.getTabla()[i]-Tabla_v[i]==1){
                  arre[i]=0;
              } else if(Tabla_v[i]==0 &&rvalue.getTabla()[i]-Tabla_v[i]==0){
                  
                  arre[i]=0;
              }

          }

          return arre;

    }

    int* operator*(Binario& rvalue){
        int* arre = new int [4];
          
          for (int i = 0; i < 4; ++i){
              
              if(Tabla_v[i]==1&&rvalue.getTabla()[i]==1){
                  arre[i]=1;

              }  else if(Tabla_v[i]==1&&rvalue.getTabla()[i]==0){
                  arre[i]=0;
              } else if(Tabla_v[i]==0&&rvalue.getTabla()[i]==1){
                  arre[i]=0;
              }else if(Tabla_v[i]==0&&rvalue.getTabla()[i]==0){
                  arre[i]=1;
              }
          }

          return arre;

    }


    int* operator/(Binario& rvalue){

          int* arre = new int [4];
          
          for (int i = 0; i < 4; ++i){
              
              if(Tabla_v[i]==1&&rvalue.getTabla()[i]==1){
                  arre[i]=1;

              }  else if(Tabla_v[i]==1&&rvalue.getTabla()[i]==0){
                  arre[i]=0;
              } else if(Tabla_v[i]==0&&rvalue.getTabla()[i]==1){
                  arre[i]=0;
              }else if(Tabla_v[i]==0&&rvalue.getTabla()[i]==0){
                  arre[i]=1;
              }
          }

          return arre;

    }

    int* operator^(Binario& rvalue){

          int* arre = new int [4];
          
          for (int i = 0; i < 4; ++i){
              
              if(Tabla_v[i]==0&&rvalue.getTabla()[i]==0){
                  arre[i]=1;

              }  else if(Tabla_v[i]==0&&rvalue.getTabla()[i]==1){
                  arre[i]=0;
              } else if(Tabla_v[i]==1&&rvalue.getTabla()[i]==0){
                  arre[i]=0;
              }else if(Tabla_v[i]==1&&rvalue.getTabla()[i]==1){
                  arre[i]=0;
              }
          }

          return arre;

    }


    friend ostream& operator <<(ostream &escribirBinario,Binario &binario){
    return escribirBinario<<binario.Tabla_v;
  }  
     
};
 

#endif
