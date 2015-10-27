#include <iostream>
using namespace std;
class GanoPerdio{};
int main()
{
    float nota;
    system("color FC");
    cout << "DIGITE LA NOTA OBTENIDA EN LA MATERIA: ";
    cin>>nota;
    system("cls");
    system("color 2A");
    if(nota>=3.0)
        cout<<"\n\t GANO LA MATRIA "; //Una sola l´nea
    else cout<<"\n\t PERDIO LA MATERIA";// No necsita llave
    cout<<"\n\t";
    return 0;
}
