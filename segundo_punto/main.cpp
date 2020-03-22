#include <iostream>
#include <fstream>
#include <vector>
#include "circulo.h"
#include "cuadrado.h"
#include "triangulo.h"
#include "pentagono.h"


int main(int argc, char** argv)
{
    std::vector<Geometrica*>vFig; //vector de figuras
    cout<<"probando un programa para leer archivos de texto"<<endl;
    std::vector<string>vNom; //vector de nombres

    string nombre =" ";
    Geometrica* pG=0;

    if(argc < 2){
        cout << "Por favor ingrese el 'path ' al archivo de texto:" << endl;
        cout << "El archivo de salida sera ubicado en la misma ubicacion." << endl;
        return -1;
    }

    string path = argv[1];
    ifstream archivo;
    archivo.open(path);

    cout << "Se abrirá el archivo: " << path << endl;

    if(archivo.is_open()){
        // Aquí va el codigo que se va a hacer para leer el archivo
        int tipo;
        double p_1,p_2;
        double cor_X,cor_Y;
        string linea;
        ofstream archSal;
        archSal.open("Fig_geometricas.txt");
        if( archSal.is_open()){
            do{
              getline(archivo,path);
              linea = path;
              if(linea.size()!=9){
                  cout<<"Error!"<<endl;
              }else{
                  cout<< linea<<endl;
                  tipo = (int)linea[0]-48;
                  p_1 = (double)linea[2]-48;
                  p_2 = (double)linea[4]-48;
                  cor_X = (double)linea[6]-48;
                  cor_Y= (double)linea[8]-48;
                  switch (tipo) {
                  case 1:
                  nombre = "Circulo";
                  pG = new Circulo(p_1,cor_X,cor_Y);
                  break;

                  case 2:
                  nombre = "Cuadrado";
                  pG = new Cuadrado(p_1,cor_X,cor_Y);
                  break;

                  case 3:
                  nombre = "Triangulo";
                  pG = new Triangulo(p_1,p_2,cor_X,cor_Y);
                  break;

                  case 4:
                  nombre = "Pentagono";
                  pG = new Pentagono(p_1,p_2,cor_X,cor_Y);
                  break;

                  default:
                  cout<<"Tipo de figura invalida."<<endl;
                   break;
              }
                  vNom.push_back(nombre);
                  vFig.push_back(pG);
              }

            }while(!archivo.eof());
            cout<<"Cantidad de figuras creadas: "<<vFig.size()<<endl;
            for(int i=0; i< vFig.size();i++){
                cout<<vNom.at(i)<<", (x,y)--> "<<vFig.at(i)->getX()<<","<<vFig.at(i)->getY();
                cout<<"-->perimetro: "<<vFig.at(i)->perimetro()<<" y area: "<<vFig.at(i)->area()<<endl;
                archSal<<vNom.at(i)<<", (x,y)--> "<<vFig.at(i)->getX()<<","<<vFig.at(i)->getY();
                archSal<<"-->perimetro: "<<vFig.at(i)->perimetro()<<" y area: "<<vFig.at(i)->area()<<endl;

            }
            for(int i=0; i< vFig.size();i++){

                delete vFig.at(i);
            }
            archSal.close();
        }
    }

    archivo.close();
    return 0;

}
