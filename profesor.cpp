#include "profesor.hpp"

Profesor::Profesor(int a, int b) {
    venit_pe_ora = a;
    cursuri = b;
}

int Profesor::venit(){
    return venit_pe_ora*cursuri*2;
}


void Profesor::afisare(){
    cout<<"Profesor: venit_pe_ora = "<<venit_pe_ora<<" cursuri = "<<cursuri<<endl;
}

bool Profesor::isInginerSoftware(){
    return false;
}