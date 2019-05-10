// Tuplas de la tabla estudiante
#include <iostream>


#ifndef TUPLA_H_

#define TUPLA_H_

class Tupla{

public:

	Tupla();

	Tupla(int ID, std::string nombre);

	void setNombre(std::string nombre);

	void setID(int ID);

	std::string getNombre();

	int getID();

	int size();

	~Tupla();








private:
	int ID;
	std::string nombre;

};




#endif /* TUPLA_H_ */
