#include "inginer.hpp"

class Inginer_software: public Inginer {
char * companie;
int experienta;

public:
    Inginer_software(char*, int, int ,int);
    void afisare();
    bool isInginerSoftware();
};