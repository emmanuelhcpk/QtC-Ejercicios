//Efrain Oviedo
#include <iostream>
using namespace std;
class DistincionMenorMayor{};
int main()
{
    float a, b;
    cout << "Digite el valor de a: ";
    cin>>a;
    cout<<"DIGITE EL VALOR DE b: ";
    cin>>b;
    if (a>b){
        cout<<" a ES MAYOR QUE b"<<endl;
    }
        else if(a==b){

          cout<< "a ES IGUAL A b ";
        }
         else{
           cout<<" a ES MENOR QUE b "<<endl;
         }
    return 0;
}
