#include <string>
#include "pinturas.h"
#include "obras.h"


using namespace std;

Pinturas::Pinturas(string material,string tecnica){
  this->material=material;
  this->tecnica=tecnica;
}

Pinturas::Pinturas(){

}
	
	string Pinturas::getMaterial(){
		return material;
	}
	void Pinturas:: setMaterial(string material){
		this->material=material;
	}
   
	string Pinturas::getTecnica(){
		return tecnica;
	}
	void Pinturas::setTecnica(string tecnica){
		this->tecnica=tecnica;
	}

