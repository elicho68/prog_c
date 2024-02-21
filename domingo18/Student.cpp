#include <iostream>
#include "Person.cpp"
using namespace std;

class Student : Person{
	//atributos
	private : string carnet;
	//contructor
	public : 
	Student(){		
	}
	Student(string nom,string ape,string dir,int tel,string fn, string car) : Person(nom,ape,dir,tel,fn){ 
	carnet=car;
	
	}
	//metodos
	void leer(){
		cout << carnet << endl;
		cout << nombres << endl;
		cout << apellidos << endl;
		cout << direccion << endl;
		cout << telefono << endl;
		cout << fecha_nacimiento << endl;
	}
};

