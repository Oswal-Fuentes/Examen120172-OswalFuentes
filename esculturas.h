#ifndef ESCULTURAS_H
#define ESCULTURAS_H
#include <string>
#include "obras.h"



using namespace std;

class Esculturas: public Obras{
	protected:
		int peso;
		string material;

  public:
	//Constructores
	Esculturas();
	Esculturas(string,string,string,string,string,int,string);

	//Mutadores
	int getPeso();
	void setPeso(int);

	string getMaterial();
	void setMaterial(string);
    };

#endif
