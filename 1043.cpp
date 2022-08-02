#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if ((a+b)>c && (b+c)>a && (a+c)>b){
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<a+b+c<<endl;}
    else{
        cout<<fixed<<setprecision(1)<<"Area = "<<(a+b)*c*.5<<endl;}
}
