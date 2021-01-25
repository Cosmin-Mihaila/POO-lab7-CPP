#include "inginer.hpp"

Inginer::Inginer(int a, int b) {
    venit_pe_ora = a;
    ore_lucrate = b;
    
}

int Inginer::venit() {
    return venit_pe_ora*ore_lucrate;
}

void Inginer::afisare(){
    cout<<"Inginer: venit_pe_ora = "<<venit_pe_ora<<" ore_lucrate = "<<ore_lucrate<<endl;
}

bool Inginer::isInginerSoftware(){
    return false;
}