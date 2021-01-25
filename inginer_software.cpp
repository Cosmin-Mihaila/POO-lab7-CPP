#include "inginer_software.hpp"

Inginer_software::Inginer_software(char* comp, int exp, int ven, int o):Inginer(ven, o), companie(comp), experienta(exp){}

void Inginer_software::afisare(){
    cout<<"Inginer_software: companie = "<<companie<<" experienta = "<<experienta<<endl;;
}

bool Inginer_software::isInginerSoftware(){
    return true;
}