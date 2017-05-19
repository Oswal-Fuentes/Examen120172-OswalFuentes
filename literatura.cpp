#include <string>
#include "literatura.h"
#include "obras.h"


using namespace std;

Literatura::Literatura(string genero,string epoca){
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

