#ifndef TERM_H
#define TERM_H
#include "term.cpp"
#include <iostream>
#include <string>


using namespace std;

class Term {
  private:
    float  _coef;
    int  _pot;
    char _var;

  public:
    Term(int p, float c,char v);
    Term(string& Te);
    string getstr(Term& T);
    float getC(){return _coef;}
    int getP(){return _pot;}
    char getV(){return _var;}
    void setC(float& c){_coef = c;}
    void setCP(float& c, int& p){_coef = c; _pot = p;}
    void setV(char& v){_var=v;}
};

#endif // TERM_H
