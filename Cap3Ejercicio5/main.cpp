//Efrain Oviedo
#include<iostream>
using namespace std;
class MayorEntreTres{};
  int main(){
       float n1, n2, n3, mayor;
       system("color 3B");
       cout<<" DIGITE EL PRIMER VALOR: ";
       cin>> n1;
       cout<<"DIGITE EL SEGUNDO VALOR: ";
       cin>> n2;
       cout<<"DIGITE EL TERCER VALOR: ";
       cin>> n3;
       if((n1>n2)&& (n1>n3))
            mayor=n1;
         else if(n2>n3)
            mayor=n2;
          else
            mayor=n3;
       system("cls");
       cout<<"\n\n\n\tEL VALOR MAYOR ENTRE: "<<n1<<" , ";
       cout<< n2<<" Y "<< n3<<" ES: "<< mayor<<endl;
       //cout no salta de linea si no se le dice (\n o endl)
       //la información anterior sale en la misma linea
}
