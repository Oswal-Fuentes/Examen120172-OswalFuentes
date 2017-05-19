#include <string>
#include "obras.h"

using namespace std;

Obras::Obras(string id,string nombre,string autor,string artista,string fecha_ingreso){
  this->id=id;
  this->nombre=nombre;
  this->autor=autor;
  this->artista=artista;
  this->fecha_ingreso=fecha_ingreso;
}

Obras::Obras(){

}

	string Obras::getID(){
		return id;
	}
	void Obras:: setID(string id){
		this->id=id;
	}

	string Obras::getNombre(){
		return nombre;
	}
	void Obras::setNombre(string nombre){
		this->nombre=nombre;
	}

	string Obras:: getAutor(){
		return autor;
	}
	void Obras:: setAutor(string autor){
		this->autor=autor;
	}

	string Obras:: getArtista(){
		return artista;
	}
	void Obras:: setArtista(string artista){
		this->artista=artista;
	}

	string Obras:: getFecha(){
		return fecha_ingreso;
	}
	void Obras:: setFecha(string fecha_ingreso){
		this->fecha_ingreso=fecha_ingreso;
	}
