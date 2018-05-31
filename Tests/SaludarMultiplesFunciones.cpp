#include <string>
#include <iostream>

 using std::string;

int main(){
	
	string SolicitarNombre();
	string SolicitarApellido();
	void MostrarSaludo(string, string);
	MostrarSaludo(SolicitarNombre, SolicitarApellido);
	
}

string SolicitarNombre(){
	
	std::cout << "Ingrese su nombre";
	string nombre;
	std::cin >> nombre;
	return nombre;
}

string SolicitarApellido(){
	
	std::cout << "ingrese su apellido";
	string apellido;
	std::cin >> apellido;
	return apellido;
}

void MostrarSaludo (string a, string b){
	std::cout << "Hola " << a << " " << b <<'\n';
}

