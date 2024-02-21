#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"Ingresar NIT: ";
	cin>>nit;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	//instacia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	
	//Opcion 1 para mostrar
	/* obj.mostrar(); */
	
	// opcion 2 para mostrar
	cout<<"Datos del Cliente: "<<obj.getNit()<<","<<obj.getNombres()<<" "<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono();
	

/*	//opcion 1 de instacia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
	//Opcion 1 de modificacion -- Forma correcta 
	cout<<"Ingresar NIT: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();

	//opcion 2 de instacia de un objeto
	Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();
*/	
}
