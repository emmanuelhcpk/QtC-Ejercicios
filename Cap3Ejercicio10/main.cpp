// Efrain Oviedo
#include<iostream>
using namespace std;
class ViajeAleatorio{};
 int main(){
   short numPapelito;
   cout<<"\n\t\tDIGITE EL NUMERO SACADO DE LA BOLSA: ";
   cin>>numPapelito;
   system("cls");
   switch (numPapelito){
      case 1: cout<<"\n\t\tEL VIAJE ES A BOGOTÁ";
              break;
      case 2: cout<<"\n\t\tEL VIAJE ES A BARRANQUILLA";
              break;
      case 3: cout<<"\n\t\tEL VIAJE ES A CARTAGENA";
              break;
      case 4: cout<<"\n\t\tEL VIAJE ES A CALI";
              break;
      default: cout<<"\n\t\tNO VIAJA A NINGUNA CIUDAD";
               break;
   }
  cout<<"\n\n\t\t";
  system("pause");
}
