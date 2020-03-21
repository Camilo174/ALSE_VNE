#include <iostream>
#include "circulo.h"
#include "cuadrado.h"
#include "triangulo.h"
#include "pentagono.h"

#include <vector>

int main()
{
    std::vector<Geometrica*>vFig; //vector de figuras
    std::vector<string>vNom; //Vector de nombres


    float lado, radio, base, altura, apotema;
    lado = radio = base = altura = apotema;

    float coor_x, coor_y;
    coor_x = coor_y = 0;

    int bandera = 1; //Para repetir ciclo hasta que el usuario decida no ingresar mas figuras

    int tipo = 0; //Seleccionar el tipo de figura a crear

    string nombre = " ";

    Geometrica* pG = 0; //puntero para las diferentes figuras a crear

    while(bandera == 1){
        cout<<"Para crear Circulo, ingrese (1), (2) para Cuadrado, (3) para Triangulo o (4) para Pentagono"<<endl;
        cin>>tipo;

        switch(tipo){

            case 1:
            nombre = "Circulo";
            cout<<"Ingrese el radio: ";
            cin>>radio;
            cout<<"Ingrese la coordenada x del centro: ";
            cin>>coor_x;
            cout<<"Ingrese la coordenada y del centro: ";
            cin>>coor_y;
            pG = new Circulo(radio,coor_x,coor_y);
            break;

            case 2:
            nombre = "Cuadrado";
            cout<<"Ingrese el lado: ";
            cin>>lado;
            cout<<"Ingrese la coordenada x del centro: ";
            cin>>coor_x;
            cout<<"Ingrese la coordenada y del centro: ";
            cin>>coor_y;
            pG = new Cuadrado(lado,coor_x,coor_y);
            break;

            case 3:
            nombre = "Triangulo";
            cout<<"Ingrese la altura: ";
            cin>>altura;
            cout<<"Ingrese la base: ";
            cin>>base;
            cout<<"Ingrese la coordenada x del centro: ";
            cin>>coor_x;
            cout<<"Ingrese la coordenada y del centro: ";
            cin>>coor_y;
            pG = new Triangulo(base,altura,coor_x,coor_y);
            break;

            case 4:
            nombre = "Pentagono";
            cout<<"Ingrese el lado: ";
            cin>>lado;
            cout<<"Ingrese la apotema: ";
            cin>>apotema;
            cout<<"Ingrese la coordenada x del centro: ";
            cin>>coor_x;
            cout<<"Ingrese la coordenada y del centro: ";
            cin>>coor_y;
            pG = new Pentagono(lado,apotema,coor_x,coor_y);
            break;

            default:
            cout<<"Seleccione una ópcion válida."<<endl;
            break;

        }
            vNom.push_back(nombre);
            vFig.push_back(pG);
            cout<<"Presione '1' para nueva figura o cualquier otro caracter para finalizar"<<endl;
            cin>>bandera;
    }

    cout<<""<<endl;
    cout<<"Cantidad de figuras creadas: "<<vFig.size()<<endl;
    cout<<""<<endl;

    for (int i = 0; i < vFig.size(); i++){
        cout <<vNom.at(i)<<", (x,y) --> "<<vFig.at(i)->getX()<<","<<vFig.at(i)->getY();
        cout << " --> Perímetro: " << vFig.at(i)->perimetro() << " y área: " << vFig.at(i)->area() << endl;
    }

    for (int i = 0; i < vFig.size(); i++){
        delete vFig.at(i);
    }


}
