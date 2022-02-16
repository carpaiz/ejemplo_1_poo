#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string n,nom,ape,dir,fn;
	int tel;
	cout<<"Ingrese Nit:";
	cin>>n;
	cout<<"Ingrese Nombres:";
	cin>>nom;
	cout<<"Ingrese Apellidos:";
	cin>>ape;
	cout<<"Ingrese Direccion:";
	cin>>dir;
	cout<<"Ingrese Nacimiento:";
	cin>>fn;
	cout<<"Ingrese Telefono:";
	cin>>tel;
	
	// instancia de un objeto
	Cliente obj = Cliente(nom,ape,dir,tel,fn,n);
	obj.mostrar();
	cout<<"_________________"<<endl;
	cout<<"Modificar Nit:";
	cin>>n;
	cout<<"Modificar Nombres:";
	cin>>nom;
	cout<<"Modificar Apellidos:";
	cin>>ape;
	cout<<"Modificar Direccion:";
	cin>>dir;
	cout<<"Modificar Nacimiento:";
	cin>>fn;
	cout<<"Modificar Telefono:";
	cin>>tel;
	
	
	obj.setNit(n);
	obj.getNombres(nom);
	obj.setApellidos(ape);
	obj.setDireccion(dir);
	obj.setFN(fn);
	obj.setTelefono(tel);
	cout<<"_________________________"<<endl;
	cout<<"Nit:"<<obj.getNit()<<endl;
	cout<<"Nombres:"<<obj.getNombres()<<endl;
	cout<<"Apellidos:"<<obj.getApellidos()<<endl;
	cout<<"Direccion:"<<obj.getDireccion()<<endl;
	cout<<"Fecha Nacimietno:"<<obj.getFN()<<endl;
	cout<<"Telefono:"<<obj.getTelefono()<<endl;
	//obj.mostrar();
	
}
