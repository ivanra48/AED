#include <iostream>
#include <fstream>
using namespace std;

int main () {
	
	string texto;
	texto = "Hola mundo";
		
  ofstream myfile ("output.txt");
  if (myfile.is_open())
  {
	std::cout << texto;
    myfile << texto;
    myfile.close();
  }
  else cout << "Error al leer el archivo";
  return 0;
}
