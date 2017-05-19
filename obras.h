#ifndef OBRAS_H
#define OBRAS_H
#include <string>


using namespace std;

class Obras{
	protected:
		string id;
		string nombre;
		string autor;
		string artista;
		string fecha_ingreso;
  public:
	//Constructores
	Obras();
	Obras(string,string,string,string,string);
	
	//Mutadores
	string getID();
	void setID(string);
    
	string getNombre();
	void setNombre(string);
    
	string getAutor();
	void setAutor(string);
    
	string getArtista();
	void setArtista(string);
    
	string getFecha();
	void setFecha(string);	
};

#endif
