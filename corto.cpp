#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout<<"Ingrese su edad\n";
    int edad;
    cin>>edad;
    if(edad>=16){
        cout<<"Seleccione una categoria e ingrese un numero de acuerdo a ella:\n";
        cout<<" 1.Estudiante\n 2.Profesional\n 3.Ver todos\n";
        int categoria;
        cin>>categoria;
        string eleccion;
        int precio, saldo=1000;
        switch(categoria){
            char opcion;
            case 1:
                cout<<"Para Estudiantes (descuento del 20%):\n";
                cout<<" a) Laptop Basica: $900\n b)Tablet Estudiantil: $600\n c)Chromebook: $700\n";
                cin>>opcion;
                switch(opcion){
                    case 'a':
                        eleccion="Laptop Basica";
                        precio=900-900*0.2;
                        break;
                    case 'b':
                        eleccion="Tablet Estudiantil";
                        precio=600-600*0.2;
                        break;
                    case 'c':
                        eleccion="Chromebook";
                        precio=700-700*0.2;
                        break;
                    default:
                        cout<<"Opcion invalida\n";
                        return 0;
                }
                break;
            case 2:
                cout<<"Para Profesionales (descuento del 10%):\n";
                cout<<" a)Laptop Avanzada: $1500\n  b)Tablet Pro: $1200\n c)Estacion de Trabajo: $2000\n";
                cin>>opcion;
                switch(opcion){
                    case 'a':
                        eleccion="Laptop Avanzada";
                        precio=1500-1500*0.1;
                        break;
                    case 'b':
                        eleccion="Tablet pro";
                        precio=1200-1200*0.1;
                        break;
                    case 'c':
                        eleccion="Estacion de trabajo";
                        precio=2000-2000*0.1;
                        break;
                    default:
                        cout<<"Opcion invalida\n";
                        return 0;
                }
                break;
            case 3:
                cout<<" a) Laptop Basica: $900\n b)Tablet Estudiantil: $600\n c)Chromebook: $700\n";
                cout<<" d)Laptop Avanzada: $1500\n e)Tablet Pro: $1200\n f)Estacion de Trabajo: $2000\n";
                cin>>opcion;
                switch(opcion){
                    case 'a':
                        eleccion="Laptop Basica";
                        precio=900;
                        break;
                    case 'b':
                        eleccion="Tablet Estudiantil";
                        precio=600;
                        break;
                    case 'c':
                        eleccion="Chromebook";
                        precio=700;
                        break;
                    case 'd':
                        eleccion="Laptop-Avanzada";
                        precio=1500;
                        break;
                    case 'e':
                        eleccion="Tablet pro";
                        precio=1200;
                        break;
                    case 'f':
                        eleccion="Estacion de trabajo";
                        precio=2000;
                        break;
                    default:
                        cout<<"Opcion invalida\n";
                        return 0;
                }
                break;
            default:
                cout<<"Categoria invalida\n";
                return 0;
        }
        if(precio>saldo){
            cout<<"No tienes suficiente dinero, necesitas "<<precio-saldo<<" para poder comprar "<<eleccion<<"\n";
        }
        else{
            saldo-=precio;
            cout<<"Compra exitosa\n";
            cout<<"Has adquirido "<<eleccion<<" tu saldo restante es "<<saldo<<"\n";
        }
    }
    else{
        cout<<"No puedes continuar tu compra\n";
    }
    return 0;
}