#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,p, x,y;
    double b,q;
    cin>>x>>a>>b>>y>>p>>q;
    cout <<fixed<<setprecision(2)<< "VALOR A PAGAR: R$ " <<(a*b)+(p*q)<< endl;
    return 0;
}
