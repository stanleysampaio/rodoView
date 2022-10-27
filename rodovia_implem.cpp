#include "rodovia_implem.h"
#include <algorithm>
#include <vector>
#include <iostream>


Rodovia_implem::Rodovia_implem() {

    Rodovia_implem::setId();
    this->id = Rodovia_implem::getId();
    this->name = "Default";
    this->caixa = 0;


};

Rodovia_implem::Rodovia_implem(const Rodovia_implem& c){
    Rodovia_implem::setId();
    this->name = c.name;
    this->id = Rodovia_implem::getId();
    this->caixa = c.caixa;

};

Rodovia_implem::Rodovia_implem(string name, float caixa) {

    Rodovia_implem::setId();
    this->id = Rodovia_implem::getId();
    this->name = name;
    this->caixa = caixa;


};

Rodovia_implem::Rodovia_implem(string name, float caixa, vector<Pedagio_implem*> pedagios) {

    Rodovia_implem::setId();
    this->id = Rodovia_implem::getId();
    this->name = name;
    this->caixa = caixa;
    for (Pedagio_implem *p : pedagios){
        this->pedagios.push_back(p);
    };
};

int Rodovia_implem::getId() const{
  return this->id;
};

int Rodovia_implem::setId(){
    return this->id++;

};

void Rodovia_implem::setName(string name){
    this->name = name;
};

string Rodovia_implem::getName(void) const{
    return this->name;
};

void Rodovia_implem::setCaixa(float cx){
    this->caixa = cx;
};

float Rodovia_implem::getCaixa(void) const{
    return this->caixa;
};

vector<Pedagio_implem*> Rodovia_implem::getPedagios() const{
    return this->pedagios;
}

void Rodovia_implem::add (Pedagio_implem *p){
    this->pedagios.push_back(p);
}


bool Rodovia_implem::remove(Pedagio_implem *p){
    if(p != NULL){
        vector<Pedagio_implem*>::iterator itPedagio;
        itPedagio = find(pedagios.begin(), pedagios.end(), p);
        pedagios.erase(itPedagio);
        return true;
    }
    return false;
};

Rodovia_implem& Rodovia_implem::operator= (const Rodovia_implem &rhs){
    if(&rhs == this) return (*this);
    name = rhs.name;
    id = rhs.id;
    caixa = rhs.caixa;
    pedagios = rhs.pedagios;


    return *this;
};


std::ostream& operator<<(std::ostream& out, const Rodovia_implem& s){
    Rodovia_implem sis = s;
    out << "Nome da rodovia : "<< sis.getName() << "\n ID value  " << sis.getId() << "\n Valor no caixa da rodovia : " << sis.getCaixa() << endl;
    return out;
};

bool Rodovia_implem::operator==(const Rodovia_implem& rhs) const {
    return this->getName()  == rhs.getName() &&
           this->getId() == rhs.getId() &&
            this->getCaixa() == rhs.getCaixa() &&
            this->getPedagios() == rhs.getPedagios();
};


