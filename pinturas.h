#ifndef PINTURAS_H
#define PINTURAS_H
#include <string>
#include "obras.h"


using namespace std;

class Pinturas: public Obras{
	protected:
		string material;
		string tecnica;
		
  public:
	//Constructores
	Pinturas();
	Pinturas(string,string);
	
	//Mutadores
	string getMaterial();
	void setMaterial(string);
    
	string getTecnica();
	void setTecnica(string);
    };

#endif
