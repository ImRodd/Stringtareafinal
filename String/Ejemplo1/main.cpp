#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)

{
	//Tienda 
  int num1;
  int num2;
  int resultado;
  
  string nombre="", producto="";
  
  cout<<"Ingrese su nombre"<<endl;
  cin>>nombre;
  
  cout<<"Ingrese producto"<<endl;
  cin>>producto;
   
  cout << "Ingrese el primer numero\n";
  cin >> num1;
  
  cout << "Ingrese el segundo numero\n";
  cin >> num2;
  
  resultado = num1 + num2;
  
  cout << "Hola" << nombre << "Su producto es" <<producto << "Su resultado es" << resultado;
 
  return 0;
}
