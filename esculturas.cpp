#include <string>
#include "esculturas.h"
#include "obras.h"


using namespace std;

Esculturas::Esculturas(string id,string nombre,string autor,string artista,string fecha_ingreso, int peso,string material){
  this->id=id;
  this->nombre=nombre;
  this->autor=autor;
  this->artista=artista;
  this->fecha_ingreso=fecha_ingreso;
  this->peso=peso;
  this->material=material;
}

Esculturas::Esculturas(){

}

	int Esculturas::getPeso(){
		return peso;
	}
	void Esculturas::setPeso(int peso){
		this->peso=peso;
	}

	string Esculturas::getMaterial(){
		return material;
	}
	void Esculturas::setMaterial(string material){
		this->material=material;
	}
