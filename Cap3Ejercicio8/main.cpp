//Efain Oviedo
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float x, y, yr, yp;
    cout<<"\n\t\tINGRESE EL VALOR DE X: ";
    cin>>x;
    cout<<"\n\t\tINGRESE EL VALOR DE Y: "; cin>>y;
    yr=x-3;
    yp=4-pow(x,2);
    system("cls");
    cout<<"\n\t\tEL PUNTO DE COORDENADAS: ("<<x<<','<<y<<") ";
    if((y>=yr)&&(x<=yp))
        cout<<"PERTENECE AL AREA";
    else
        cout<<"NO PERTENECE AL AREA"<<endl<<endl;
    cout<<"\n\t\t";
    system("pause");
}

