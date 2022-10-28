#include "../pedagio_implem.cpp"
#include <stdio.h> 
#include <assert.h>


void test(){

Pedagio_implem *pedagio1 = new Pedagio_implem();

//Get and Set test
pedagio1->setName("pedagio1") ;
assert(pedagio1->getName() == "pedagio1");



}