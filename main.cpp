#include <iostream>
#include "profesor.hpp"
#include "fermier.hpp"
#include "inginer_software.hpp"
using namespace std;

int main()
{
    Baza** v = new Baza*[10];
    v[0] = new Profesor(100, 10);
    v[1] = new Fermier(100, 500);
    v[2] = new Inginer(100, 80);
    v[3] = new Inginer_software((char*)"Intel", 10, 100, 100);
    int j;
    int i;
    for(i = 0; i < 3; i ++){
        for(j = i + 1; j < 4; j ++)
        if(v[i]->venit() > v[j]->venit()) {
            Baza* aux;
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
    }

    for(i = 0; i < 4; i ++){
        v[i]->afisare();
        cout<<v[i]->venit()<<endl;
    }

    cout<<"Doar ingineri software"<<endl;

    for(i = 0; i < 4 ; i ++){
        if(v[i]->isInginerSoftware()){
            v[i]->afisare();
        }
    }

}
