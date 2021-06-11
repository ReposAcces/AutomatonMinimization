#ifndef MINIMIZACION_H
#define MINIMIZACION_H

#include<map>

class DFAs{
private:
   vector<char> C;
   estado *a;
   estado *e;
   int tam;

public:
   DFAs(){
        a=NULL;
        e=NULL;
        tam=0;
   }
   ~DFAs(){
      estado *aux1=a
      estado *aux2;
      while(aux1){
      	  aux2= aux1->c;
      	  delete aux1;
      	  aux1 = aux2;
      }
   }
   
