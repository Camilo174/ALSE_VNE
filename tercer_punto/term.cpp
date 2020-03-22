#include "term.h"

Term::Term(int p,float c,char v){
    _coef = c;
    _pot = p;
    _var = v ;
}

string Term::getstr(Term& T) {
   stringstream temp;
   temp<<T._coef<<T._var<<'^'<<T._pot<<endl;
   return temp.str();
}

Term::Term(string& Te){
    _coef=atof(Te[0]);
    _var=Te[1];
    _pot=atoi(Te[3]);
}
