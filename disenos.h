#ifndef DISENOS_H
#define DISENOS_H
#include <string>
#include "obras.h"


using namespace std;

class Disenos: public Obras{
	protected:
		string tipo_terreno;

  public:
	//Constructores
	Disenos();
	Disenos(string,string,string,string,string,string);

	//Mutadores
	string getTipo_terreno();
	void setTipo_terreno(string);
    };

#endif
