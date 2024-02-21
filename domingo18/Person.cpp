#include <iostream>
using namespace std;
//clases de personas 

class Person{
	// atributos de la clase: nombres, apellidos, direccion, telefono
	
	protected : string nombres, apellidos, direccion, fecha_nacimiento;
	int telefono;
	
	
	// constructor con el nombre de la clase
	Person(){
		
	}
	
	// Los constructores no pueden estar igual porque seria una sobrecarga de metodos
	Person(string nom, string ape, string dir, int tel, string fn){
		// ATRIBUTOS ASIGNADOS
		nombres=nom;
		apellidos=ape;
		direccion=dir;
		telefono=tel;
		fecha_nacimiento=fn;
	} 
	
	// METODO CRUD crear leer, actualizar borrar
	// Metodo para declarar se pone(); y ya si hace algo se pone {};
	void crear();
	void leer();
	void actualizar();
	void borrar();

};
