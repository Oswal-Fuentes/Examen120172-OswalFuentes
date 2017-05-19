#ifndef OBRAS_H
#define OBRAS_H

class Obras{
	protected:
		string id;
		string nombre;
		string autor;
		string artista;
		string fecha_ingreso;
  public:
	Obras();
	Obras(string id,string nombre,string autor,string artista,string fecha_ingreso);
    
};

#endif
