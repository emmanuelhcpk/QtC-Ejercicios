
// Efrain oviedo
#include<iostream>
using namespace std;
int main(){
  int numero,n;/* n se utiliza como respaldo de numero para no
                modificarlo*/
  short cDigitos=0, digito, suma=0; /*digito es cada  dígito del número*/
  cout<<"\n\t\tDIGITE EL NUMERO DE MAXIMO 4 CIFRAS: ";
  cin>>numero;
  n=numero;
  digito=n%10;
  system("cls");
  n=n/10; /* división entre enteros, un entero sobre otro entero
           da un entero. Ejemplo 5/2=2, esto significa que los
           computadores manejan la matemática entera*/
  cDigitos++;
  suma+=digito;
  if(n>0)
   {
       digito=n%10;
       cDigitos++;
       n=n/10;
       suma+=digito;
       if(n>0)
        {
          digito=n%10;
          n=n/10;
          cDigitos++;
          suma+=digito;
          if(n>0)
            {
               digito=n%10;
                n=n/10;
                cDigitos++;
                suma+=digito;

             }
        }
   }
   if(n>0)
   {
     cout<<"\n\t\tEL NUMERO TIENE: MAS DE 4 CIFRAS "<<endl<<endl;
   }
   else{
    cout<<"\n\t\tEL NUMERO TIENE: "<<cDigitos<<" DIGITOS "<<endl;
     cout<<"\n\t\tLA SUMA DE LOS DIGITOS ES:"<<suma<<endl<<endl;
    }
   cout<<"\t\t";
}
