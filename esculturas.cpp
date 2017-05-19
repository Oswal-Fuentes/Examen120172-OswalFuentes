#include <string>
#include "esculturas.h"
#include "obras.h"


using namespace std;

Esculturas::Esculturas(int peso,string material){
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

