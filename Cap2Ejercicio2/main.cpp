#include <iostream>
using namespace std;
class Nombre{};
int main(){
    char nombre[50];
    int edad;
    cout<<"Ingrese su edad: ";        	//Muestra Ingrese su edad:
    cin>>edad;                          	//lee la edad que el usuario ingresa
    cout<<"Ingrese su nombre: ";      	//Muestra Ingrese su nombre:
    cin>>ws;                            	//Se eliminan espacios y caracteres
    //de la memoria
    cin.getline(nombre,50);       	 //Se indica que se van a leer
    //máximo 50 caracteres que es el tamaño
    //de la cadena nombre.
    cout<<"Su nombre es: "<<nombre<<" y su edad es: "<<edad<<endl;
    system("pause");
}
