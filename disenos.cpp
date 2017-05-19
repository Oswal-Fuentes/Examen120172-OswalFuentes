#include <string>
#include "disenos.h"
#include "obras.h"


using namespace std;

Disenos::Disenos(string tipo_terreno){
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
