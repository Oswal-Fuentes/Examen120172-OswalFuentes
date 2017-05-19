#include <string>
#include "diseños.h"
#include "obras.h"


using namespace std;

Diseños::Diseños(string tipo_terreno){
  this->tipo_terreno=tipo_terreno;
}

Diseños::Diseños(){

}	
	string Diseños::getTipo_terreno(){
		return tipo_terreno;
	}
	void Diseños::setTipo_terreno(string tipo_terreno){
		this->tipo_terreno=tipo_terreno;
	}

