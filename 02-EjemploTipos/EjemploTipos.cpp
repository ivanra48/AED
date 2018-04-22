/* EjemploTipo
 * examples of different types of data
 * Ivan Ramis
 * 22/4/2018
 */
 
 #include <iostream>
 #include <cassert>
  
 int main () {

	bool tru = "true";
	
	char caract = 'H';
	
	unsigned natu = 48;
	
	int entero = -48;
	
	double coma = 48.5;
	
	std::string str = "hola amigos";
	
	assert (tru == true);
	assert (caract != 'B');
	assert (natu == 24+24);
	assert (entero ==  0 - 48);
	assert (coma == 48 + 0.5);
	assert (str != "hola mundo");
	
	
}
