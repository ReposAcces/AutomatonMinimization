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
