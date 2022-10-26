#include "rodovia_implem.h"

Rodovia_implem::Rodovia_implem() : Rodovia_Interface()
{
    Rodovia_implem::setId();
    this->id = Rodovia_implem::getId();
    this->name = "Default";
    this->caixa = 0;


};

int Rodovia_implem::getId(){
  return this->id;
};

int Rodovia_implem::setId(){
    return this->id++;

};

void Rodovia_implem::setName(string name){
    this->name = name;
};

string Rodovia_implem::getName(void){
    return this->name;
};

void Rodovia_implem::setCaixa(float cx){
    this->caixa = cx;
};

float Rodovia_implem::getCaixa(void){
    return this->caixa;
};



