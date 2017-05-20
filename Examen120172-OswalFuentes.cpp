#include <iostream>
#include <string>
#include "obras.h"
#include "literatura.h"
#include "esculturas.h"
#include "pinturas.h"
#include "disenos.h"
#include "vector"
#include <stdlib.h>

using namespace std;

//Funcion menu
int menu();
//Funcion tipos de obras
int menu_tipoObras();
//Funcion hexadecimal
string hexadecimal();

int main(){
	  vector <Obras> obras;
    vector <Obras> transferidos;
    bool salir = false;
    while (!salir) {
        switch (menu()) {
        case 1://Agregar
            {
	int temp = menu_tipoObras();
	switch (temp) {
		case 1:
            {//Literatura
		string id,nombre,artista,fecha_ingreso,genero,epoca;
		id=hexadecimal();
		cout<<"Ingrese nombre: "<<endl;
		cin>>nombre;
		cout<<"Ingrese artista: "<<endl;
		cin>>artista;
		cout<<"Ingrese fecha ingreso: "<<endl;
		cin>>fecha_ingreso;
		cout<<"Ingrese genero: "<<endl;
		cin>>genero;
		cout<<"Ingrese epoca: "<<endl;
		cin>>epoca;
		//Agregar al constructor
    Literatura a(id,nombre,artista,artista,fecha_ingreso,genero,epoca);
    obras.push_back(a);
    break;
		}//Fin literatura
		case 2:
            	{//Esculturas
		string id,nombre,artista,fecha_ingreso,material;
		int peso;
		id=hexadecimal();
		cout<<"Ingrese nombre: "<<endl;
		cin>>nombre;
		cout<<"Ingrese artista: "<<endl;
		cin>>artista;
		cout<<"Ingrese fecha ingreso: "<<endl;
		cin>>fecha_ingreso;
		cout<<"Ingrese peso: "<<endl;
		cin>>peso;
		cout<<"Ingrese material: "<<endl;
		cin>>material;
		//Agregar al constructor
    Esculturas a(id,nombre,artista,artista,fecha_ingreso,peso,material);
    //string id,string nombre,string autor,string artista,string fecha_ingreso, int peso,string material
    obras.push_back(a);
    break;
		}//Fin esculturas
		case 3:
            	{//Pinturas
		string id,nombre,artista,fecha_ingreso,material,tecnica;
		id=hexadecimal();
		cout<<"Ingrese nombre: "<<endl;
		cin>>nombre;
		cout<<"Ingrese artista: "<<endl;
		cin>>artista;
		cout<<"Ingrese fecha ingreso: "<<endl;
		cin>>fecha_ingreso;
		cout<<"Ingrese material del lienzo: "<<endl;
		cin>>material;
		cout<<"Ingrese tecnica: "<<endl;
		cin>>tecnica;
		//Agregar al constructor
    Pinturas a(id,nombre,artista,artista,fecha_ingreso,material,tecnica);
    obras.push_back(a);
    break;
		}//Fin pinturas
		case 4:
            	{//Diseños arquitectonicos
		string id,nombre,artista,fecha_ingreso,tipo_terreno;
		id=hexadecimal();
		cout<<"Ingrese nombre: "<<endl;
		cin>>nombre;
		cout<<"Ingrese artista: "<<endl;
		cin>>artista;
		cout<<"Ingrese fecha ingreso: "<<endl;
		cin>>fecha_ingreso;
		cout<<"Ingrese tipo de terreno: "<<endl;
		cin>>tipo_terreno;
		//Agregar al constructor
    Disenos a(id,nombre,artista,artista,fecha_ingreso,tipo_terreno);
    obras.push_back(a);
    break;
		}//Fin diseños
		}//Fin case menu tipos
                break;
            }
	case 2://Eliminar
            {
              int pos;
              cout<<"Ingrese la posicion de la obra que desea eliminar: "<<endl;
              cin>>pos;
              obras.erase(obras.begin()+pos);
                break;
            }

	case 3://Transferir
            {
              int pos;
              cout<<"Ingrese la posicion del elemento que desea transferir: "<<endl;
              cin>>pos;
              Obras obra =obras[pos];
              transferidos.push_back(obra);
              obras.erase(obras.begin()+pos);
                break;
            }

	case 4://Reportes
            {
              cout<<"Obras existentes: "<<endl;
              for (int i=0; i<obras.size();i++){
                cout <<i<<")"<< obras[i].getNombre()<<" ID:"<<obras[i].getID() <<" Artista: "<< obras[i].getArtista()<<endl;
              }
              cout<<"Obras transferidas: "<<endl;
              for (int i=0; i<transferidos.size();i++){
                cout <<i<<")"<< obras[i].getNombre()<<" ID:"<<obras[i].getID() <<" Artista: "<< obras[i].getArtista()<<endl;
              }
                break;
            }

	case 5://Busqueda
            {
              string autor;
              cout<<"Ingrese el autor para filtrar sus obras: "<<endl;
              cin>>autor;
              for (int i = 0; i < obras.size(); i++) {
                  if(obras[i].getArtista().compare(autor)==0){
                    cout<<"Obras de "<<autor<<": "<<endl;
                    cout <<i<<")"<< obras[i].getNombre() << endl;
                  }
              }
                break;
            }
	case 6://Salir
            {
		salir=true;
                break;
            }





	}
}
return 0;
}//Fin MAIN

int menu() {
    int opcion;
    bool valido = false;
    do {
        cout << "-----MENU-----" << endl
                << "1.- Agregar" << endl
                << "2.- Eliminar" << endl
                << "3.- Transferir" << endl
                << "4.- Reportes" << endl
                << "5.- Busqueda" << endl
                << "6.- Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin>>opcion;
        if (opcion > 0 && opcion <= 6)
            valido = true;
        else {
            cout << "Opcion no valida, intente de nuevo..." << endl;
        }

    } while (!valido);

    return opcion;
}

int menu_tipoObras() {
    int opcion;
    bool valido = false;
    do {
        cout << "-----MENU-----" << endl
                << "1.- Literatura" << endl
                << "2.- Esculturas" << endl
                << "3.- Pinturas" << endl
                << "4.- Diseños arquitectonicos" << endl;
        cout << "Ingrese una opcion: ";
        cin>>opcion;
        if (opcion > 0 && opcion <= 4)
            valido = true;
        else {
            cout << "Opcion no valida, intente de nuevo..." << endl;
        }

    } while (!valido);
    return opcion;
}

string hexadecimal(){
  char hexa[16]={'a','b','c','d','e','f','0','1','2','3','4','5','6','7','8','9'};
  string hexadecimal="";
  for (int i = 0; i < 6; i++) {
    char x=hexa[rand()%16];
    hexadecimal+=x;
  }
  return hexadecimal;
}
