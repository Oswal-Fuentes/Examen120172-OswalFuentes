#ifndef LITERATURA_H
#define LITERATURA_H
#include <string>
#include "obras.h"


using namespace std;

class Literatura: public Obras{
	protected:
		string genero;
		string epoca;

  public:
	//Constructores
	Literatura();
	Literatura(string,string,string,string,string,string,string);

	//Mutadores
	string getGenero();
	void setGenero(string);

	string getEpoca();
	void setEpoca(string);
    };

#endif
