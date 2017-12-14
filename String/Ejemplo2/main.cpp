#include <iostream>
#include <string>
using namespace std;
int main (int argc, char** argv) 

{
   int numero=0, resultado=0, grado=0;
   string escuela="",  materia="";
   
   cout<<"Nombre de la Escuela"<<endl;
   cin>>escuela;
   
   cout<<"Grado de estudios"<<endl;
   cin>>grado;
   
   cout<<"Materia"<<endl;
   cin>>materia;

   cout << "Ingresa un número: ";
   cin >> numero;
   
   resultado=numero*3;
   
   cout << "Bienvenido usuario de la escuela" << escuela << "Su grado de estudios es" << grado << "Su materia es" << materia << "Su resultado es" << resultado;  
   
    return 0;
}
 
