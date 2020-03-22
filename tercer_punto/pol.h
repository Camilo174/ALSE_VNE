#ifndef POL_H
#define POL_H
#include "term.h"
#include "pol.cpp"
#include<string>
#include<list>
using namespace std;

class pol{
    private:
    list<Term> polinomio;
    list<Term>::iterator pos=polinomio.begin();
    public:
    pol(string& poli);
    string getstr(pol a);
};

#endif // POL_H
