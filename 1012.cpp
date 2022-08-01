#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    cout << fixed << setprecision(3) << "TRIANGULO: " <<0.5*a*c<< endl;
    cout << fixed << setprecision(3) << "CIRCULO: " <<3.14159*c*c<< endl;
    cout << fixed << setprecision(3) << "TRAPEZIO: " <<(a+b)*c*0.5<< endl;
    cout << fixed << setprecision(3) << "QUADRADO: " <<b*b<< endl;
    cout << fixed << setprecision(3) << "RETANGULO: " <<a*b<< endl;
    return 0;
}
