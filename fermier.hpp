#include "baza.hpp"

class Fermier: public Baza{
int venit_pe_ora;
int suprafata; // fiecare 1000 m^2 = 10 ore lucrate

public:
    Fermier(int, int);
    int venit();
    void afisare();
    bool isInginerSoftware();
};