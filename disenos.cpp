#include <string>
#include "disenos.h"
#include "obras.h"


using namespace std;

Disenos::Disenos(string id,string nombre,string autor,string artista,string fecha_ingreso,string tipo_terreno){
  this->id=id;
  this->nombre=nombre;
  this->autor=autor;
  this->artista=artista;
  this->fecha_ingreso=fecha_ingreso;
  this->tipo_terreno=tipo_terreno;
}

Disenos::Disenos(){

}
	string Disenos::getTipo_terreno(){
		return tipo_terreno;
	}
	void Disenos::setTipo_terreno(string tipo_terreno){
		this->tipo_terreno=tipo_terreno;
	}
