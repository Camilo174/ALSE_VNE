#include "pol.h"
#include "term.h"
#include <string>
using namespace std;

pol::pol(string& poli)
{
   int a;
   stringstream temp;
   for (a=0;a<poli.length();a++){
        if(poli[a]=='+'|| poli[a]=='-'){
         temp<<poli[a+1]<<poli[a+2]<<poli[a+4];
         Term b(temp);
         polinomio.push_front(b);
         }
     }
}
string pol::getstr(pol a){
    stringstream temp;
    int b;
    for (b=0;b<a.polinomio.size();b++)
        temp<<'+'<< getstr(*(a.pos+b))<<endl;
    return temp;
}
