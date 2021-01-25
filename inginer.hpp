#include "baza.hpp"
class Inginer: public Baza {
protected:
int venit_pe_ora;
int ore_lucrate;

public:
    Inginer(int, int);
    int venit();
    virtual void afisare();
    virtual bool isInginerSoftware();
};