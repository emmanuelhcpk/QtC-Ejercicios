
/* Ejercicio Cap2-Ejer3
Efrain Oviedo*/
//Progarama que calcula el área de un circulo y la longitud de la circunferencia
#include <iostream>
#include <cmath>
using namespace std;
class AreaCirculo{};
int main(){
    float r, area, lc;
    cout<<"Digite el radio del circulo: ";
    cin>>r;
    area=3.1416*pow(r,2); // Al usar la función pow hay que
                         //hay que incluir la librería math
    lc=2*3.1416*r;
    system("cls"); // borra lo que hay en pantalla y coloca
                   // el cursor en la esquina superior izquierda
    cout<<"\t El area del circulo es: "<<area;
    cout<<"\n\t Y la longitud de la circunferencia es: "<<lc<<endl;
    cout<<"\n\t";//salta una línea y tabula
    //return 0;
   system("pause");//detiene la ejecución hasta que se presione
                    //una tecla, no obligatoria si usa Qt

}


