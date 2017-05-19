#include <string>
#include "literatura.h"
#include "obras.h"


using namespace std;

Literatura::Literatura(string id,string nombre,string autor,string artista,string fecha_ingreso,string genero,string epoca){
  this->id=id;
  this->nombre=nombre;
  this->autor=autor;
  this->artista=artista;
  this->fecha_ingreso=fecha_ingreso;
  this->genero=genero;
  this->epoca=epoca;
}

Literatura::Literatura(){

}

	string Literatura::getGenero(){
		return genero;
	}
	void Literatura:: setGenero(string id){
		this->genero=genero;
	}

	string Literatura::getEpoca(){
		return epoca;
	}
	void Literatura::setEpoca(string nombre){
		this->epoca=epoca;
	}
