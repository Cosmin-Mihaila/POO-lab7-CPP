#include "fermier.hpp"

Fermier::Fermier(int a, int b) {
    venit_pe_ora = a;
    suprafata = b;
}

int Fermier::venit(){
    return suprafata/100*venit_pe_ora;
}

void Fermier::afisare() {
    cout<<"Fermier: venit_pe_ora = "<<venit_pe_ora<<" suprafata = "<<suprafata<<endl;
}

bool Fermier::isInginerSoftware(){
    return false;
}