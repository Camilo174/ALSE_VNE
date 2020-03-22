#include <QCoreApplication>
#include "term.h"
#include "pol.h"
#include <iostream>
using namespace std;

int main()
{
    string a="+2x^3+1x^2-5x^4";
    pol poli(a);
    cout<<poli.getstr(poli)<<endl;
    return 0;
}
