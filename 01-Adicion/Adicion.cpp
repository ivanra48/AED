/* Adicion
 * get 2 numbers from the user and add them.
 * Ivan Ramis
 * 22/4/2018
 */
 
 #include <iostream>
 
 int main () {

	int Numero1; // Declaro variables para almacenar los numeros ingresdos por el usuario.
	int Numero2;
	
	std:: cout << "Ingrese el 1er numero\n"; //Se solicita y almacena el 1er numero.
	std:: cin >> Numero1;
	std:: cout << "Ingrese el 2do numero\n";// Se solicita y almacena el 2do numero.
	std:: cin >> Numero2;
	
	std:: cout << "La suma de los 2 numeros es: " << Numero1 + Numero2 << ".\n"; // se suma y se muestra por pantalla el resultado.
	
	return 0;		
  
}

