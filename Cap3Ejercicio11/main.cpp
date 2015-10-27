//Efrain Oviedo
#include<iostream>
using namespace std;
class VocalOCaracter{};
  int main(){
     char letra;
     cout<<"\n\t\tDIGITE UNA LETRA: ";
     cin>> letra;
     system("cls");
     switch (letra){
       case 'a': cout<<"\n\t\tLA LETRA DIGITADA ES LA VOCAL: "<< letra;
                 break;
       case 'A': cout<<"\n\t\t LA LETRA DIGITADA ES LA VOCAL A ";
                 break;
       case 'e': //en este caso si la letra es e pasa al siguiente caso
                        //por no tener break
       case 'E': cout<<"\n\t\t LA LETRA DIGITADA ES LA VOCAL: "<< letra;
                 break;
       case 'I':
       case 'i': cout<<"\n\t\t LA LETRA DIGITADA ES LA VOCAL: "<< letra;
                 break;
       case 'o':
       case 'O': cout<<"\n\t\t LA LETRA DIGITADA ES LA VOCAL O MINUSCULA                                 O MAYUSCULA";
                 break;
       case 'u' :
       case 'U': cout<<"\n\t\t LA LETRA DIGITADA ES LA VOCAL: "<< letra;
         break;
       default:  cout<<"\n\t\t tLA LETRA DIGITADA NO ES UNA VOCAL ";
         break;
}
cout<<"\n\n\t\t";
system("pause");
}
