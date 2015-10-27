/* Ejercicio Cap2 Ejer4
   Efraín Oviedo
   */
#include <iostream>
using namespace std;
class AreaRectangulo{};
int main(){
   float l1, l2,p,area;
   system("color 2A");
   cout<<" DIGITE LA BASE DEL RETANGULO: ";
   cin>>l1;
   cout<<" DIGITE LA ALTURA DEL RECTÁNGULO: ";
   cin>>l2;
   p=2*l1 + 2*l2;
   area=l1*l2;
   system("cls");
   cout<<"\n\n\t EL PERIMETRO ES: "<<p;
   cout<<"\n\n\t Y EL AREA ES: "<<area<<endl;
   cout<<"\t";
   system("pause");
}

