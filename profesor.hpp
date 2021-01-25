#include "baza.hpp"
class Profesor: public Baza{
int venit_pe_ora;
int cursuri; // 1 curs = 2 ore lucrate

public:
    Profesor(int, int);
    int venit();
    void afisare();
    bool isInginerSoftware();
};