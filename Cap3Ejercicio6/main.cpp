//Efrain Oviedo
#include<iostream>
using namespace std;
class Matricula{};
int main(){
    cout.setf(ios::fixed);// Evita que la información salga en
                         //forma exponencial
    cout.precision(2);  // Saca la información con dos decimales
    char cs[10];
    int nc;
    float pdes, vcred, pe, vsd, des, vt;
    system("color 3A");
    cout<<"digite clase de estudiante: ";
    cin>>cs;
    cout<<"digite valor promedio: ";
    cin>>pe;
    system("cls");
    if(strcmp(cs,"pregrado")==0){//Comparación de variables tipo
                                  //caracter
      if(pe>=4.5){
      pdes=25;
      nc=28;
    } // todas las llaves abiertas después de un if se deben cerrar antes
      //del else
    else  if(pe>=4.0){ //Observe que existe la instrucción else if
         pdes=10;
         nc=25; }//También se puede cerrar aquí
        else  if(pe>=3.5){
            pdes=0;
            nc=20; }
        else if(pe>=2.5){
             pdes=0;
             nc=15; }
            else{
             cout<<"  No puede matricularse "<<endl;;
             nc=0;
             pdes=0;
           }

      vcred=50000;
    }
    else{
        if(pe>=4.5){
        pdes=20;
        nc=20; }
        else{
          nc=10;
          pdes=0; }
          vcred=300000;
     }
    vsd=nc*vcred;
    des=vsd*pdes/100;
    vt=vsd-des;
    cout<<"el estudiante de: "<<cs;
    cout<<"  pagara: "<<vt;
    cout<<"  y cursara: "<<nc<<" creditos"<<endl;
    system("pause");
}
