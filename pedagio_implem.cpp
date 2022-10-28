#include "pedagio_implem.h"

Pedagio_implem::Pedagio_implem(){

}

int Pedagio_implem::getId(){
  return this->id;
};

int Pedagio_implem::setId(){
    return this->id++;

};

void Pedagio_implem::setName(string name){
    this->name = name;
};

string Pedagio_implem::getName(){
    return this->name;
};

void Pedagio_implem::setCaixa(float cx){
    this->caixa = cx;
};

float Pedagio_implem::getCaixa(){
    return this->caixa;
};

void Pedagio_implem::setPrecoCarro(float p){
    this->precoCarro = p;
};

float Pedagio_implem::getPrecoCarro(){
    return this->precoCarro;
};


void Pedagio_implem::setPrecoMoto(float p){
    this->precoMoto = p;
};

float Pedagio_implem::getPrecoMoto(){
    return this->precoMoto;
};

void Pedagio_implem::setPrecoCaminhao(float p){
    this->precoCarro = p;
};

float Pedagio_implem::getPrecoCaminhao(){
    return this->precoCaminhao;
};

void Pedagio_implem::setFluxo(int f){
    this->fluxo = f;
};

int Pedagio_implem::getFluxo(){
    return this->fluxo;
};

vector<int> Pedagio_implem::getTypes(){
    return this->types;
};




