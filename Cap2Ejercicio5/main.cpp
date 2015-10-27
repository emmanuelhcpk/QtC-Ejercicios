/* Ejercicio Cap2-Ejer5
 Efrain Oviedo*/
#include <iostream>
using namespace std;
class SumaDigitos{};
  int main(){
       int numero, n,  d1, d2, d3, suma;
       system("color 2A");
       cout<<"\n\t DIGITE UN NÚMERO ENTERO DE TRES CIFRAS: ";
       cin>> numero;
       n=numero;
       d3=n%10;
       n=n/10;
       d2=n%10;
       n=n/10;
       d1=n%10;
       suma=d1+d2+d3;
       system("cls");
       system("color 3F");
       cout<<"\n\t LA SUMA DE LOS DIGITOS: " << d1<< '+'<<d2<< '+'<<d3<<
             " ES: "<<suma<<endl;
       cout<<"\n\t LOS DIGITOS DE IZQUIERDA A DERECHA SON: "<<d1<<d2<<d3;
       cout<<"\n\t LOS DIGITOS De DERECHA A IZQUIERDA SON: "<<d3<<d2<<d1;
       cout<<"\n\t";
       return 0;
   }
