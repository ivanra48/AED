#include <string>
#include <iostream>

 using std::string;

int main(){
	
	string SolicitarNombre();
	string SolicitarApellido();
	void MostrarSaludo(string, string);
	string nombre = SolicitarNombre ();
	MostrarSaludo(nombre, SolicitarApellido());
	
}

string SolicitarNombre(){
	
	std::cout << "Ingrese su nombre \n";
	string nombre;
	std::cin >> nombre;
	return nombre;
}

string SolicitarApellido(){
	
	std::cout << "ingrese su apellido \n";
	string apellido;
	std::cin >> apellido;
	return apellido;
}

void MostrarSaludo (string a, string b){
	std::cout << "Hola " << a << " " << b <<'\n';
}

