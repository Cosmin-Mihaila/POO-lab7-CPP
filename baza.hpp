#ifndef bazahpp
#define bazahpp
#include <iostream>
using namespace std;
class Baza{
public:
	
	virtual void afisare() = 0;
	//virtual ~Baza() = 0 ;
	virtual bool isInginerSoftware() = 0;
    virtual int venit() = 0;
};

#endif