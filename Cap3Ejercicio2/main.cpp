//Efrain Oviedo
#include<iostream>
using namespace std;
class PrecioPasaje{};
 int main(){
   int diasEs;
   float dist, des, prePasaje;
   system("color AC");
   cout<< "DIGITE LA DISTANCIA POR RECORRER: ";
   cin>> dist;
   cout<<"DIGITE DIAS DE ESTANCIA: ";
   cin>> diasEs;
   prePasaje=dist*500;
   if((dist>1000)&&(diasEs>7)){
      des=prePasaje*30/100;
      prePasaje=prePasaje-des;
   }
   cout<<"\n\t EL USUARIO DEBE PAGAR $ "<< prePasaje<<endl;
   cout<<"\n\t";
   return 0;
 }
