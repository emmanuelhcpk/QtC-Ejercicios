//Efrain Oviedo
#include<iostream>
 #include<string.h>
  using namespace std;
  int main()
  {
    float valComp,pDes,valPag;
    char color[10];
    cout<<"\n\t\tENTRE EL VALOR DE LA COMPRA: ";
    cin>>valComp;
    cout<<"\n\t\tENTRE COLOR DE LA BOLITA: ";
    cin>>color;
    if(strcmp(color,"BLANCO")==0)
       pDes=0;
     else
       if(strcmp(color,"VERDE")==0)
      pDes=10;
    else
      if(strcmp(color,"AMARILLO")==0)
         pDes=25;
       else
         if(strcmp(color,"AZUL")==0)
        pDes=50;
          else
        pDes=100;
    //FIN_IF
    valPag=valComp - pDes*valComp/100;
    system("cls");
    cout<<"\n\t\tEL CLIENTE DEBE PAGAR $ "<<valPag<<endl<<endl<<"\n\t\t";
    return 0;
  }

