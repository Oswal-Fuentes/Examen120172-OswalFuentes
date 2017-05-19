#include <iostream>
#include <string>
#include "obras.h"
#include "literatura.h"
#include "esculturas.h"
#include "pinturas.h"
#include "disenos.h"
#include "vector"

using namespace std;

//Funcion menu
int menu();
//Funcion tipos de obras
int menu_tipoObras();

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
		cout<<"Ingrese el id: "<<endl;
		cin>>id;
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
    break;
		}//Fin literatura
		case 2:
            	{//Esculturas
		string id,nombre,artista,fecha_ingreso,material;
		int peso;
		cout<<"Ingrese el id: "<<endl;
		cin>>id;
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
    break;
		}//Fin esculturas
		case 3:
            	{//Pinturas
		string id,nombre,artista,fecha_ingreso,material,tecnica;
		cout<<"Ingrese el id: "<<endl;
		cin>>id;
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
    break;
		}//Fin pinturas
		case 4:
            	{//Diseños arquitectonicos
		string id,nombre,artista,fecha_ingreso,tipo_terreno;
		cout<<"Ingrese el id: "<<endl;
		cin>>id;
		cout<<"Ingrese nombre: "<<endl;
		cin>>nombre;
		cout<<"Ingrese artista: "<<endl;
		cin>>artista;
		cout<<"Ingrese fecha ingreso: "<<endl;
		cin>>fecha_ingreso;
		cout<<"Ingrese tipo de terreno: "<<endl;
		cin>>tipo_terreno;
		//Agregar al constructor
    break;
		}//Fin diseños
		}//Fin case menu tipos
                break;
            }
	case 2://Eliminar
            {

                break;
            }

	case 3://Transferir
            {

                break;
            }

	case 4://Reportes
            {

                break;
            }

	case 5://Busqueda
            {

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
