#ifndef DISEÑOS_H
#define DISEÑOS_H
#include <string>
#include "obras.h"


using namespace std;

class Diseños: public Obras{
	protected:
		string tipo_terreno;	
		
  public:
	//Constructores
	Diseños();
	Diseños(string);
	
	//Mutadores
	string getTipo_terreno();
	void setTipo_terreno(string);
    };

#endif
