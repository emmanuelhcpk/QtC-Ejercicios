/* Ejercicio Cap2- Ejer1
Efraín Oviedo*/
#include <iostream>
using namespace std;
class HolaMundo{};
int main (){
  char nombre[10]="nombre";
  int edad=10;
  cout<<"Hola mundo" <<endl;       	//Muestra : “Hola mundo” en la pantalla
  cout<<"La edad es: "<<edad<<endl;    //Muestra “ La edad es 10”
  cout<<"Su nombre es: " <<nombre<<" y su edad es: "<<edad<<endl;
                     //Muestra “ Su nombre es: nombre y su edad es 10”
  system("pause");
}
