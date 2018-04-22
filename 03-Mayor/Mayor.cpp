/* Mayor
 * the biggest of two numbers
 * Ivan Ramis
 * 22/4/2018
 */
 
 #include <iostream>
 #include <cmath> //incluyo librerias con funciones matematicas
 
 int main () {

	int num1;
	int num2;
	 
 	std:: cout << "Ingrese el primer numero.\n"; //pido ingresar y leo el primero numero.
 	
 		std:: cin >> num1;
 	
 	std:: cout << "Ingrese el segundo numero.\n"; //pido ingresar y leer el segundo numero.
 	
 		std:: cin >> num2;
 		
 	mayor = ((num1 + num2) + abs(num1 - num2)) /2; // formula para calcular el mayor de 2 numeros tanto positivos como negativos, usando absoluto.
 	
 	std:: cout << "El numero mas grande es: " << mayor; 
 
 }
