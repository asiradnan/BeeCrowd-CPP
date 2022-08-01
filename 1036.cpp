#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c;
    d=pow(b,2)-4*a*c;
    if (a==0 || d<0){
        cout<<"Impossivel calcular"<<endl;
    }
    else{
        cout<<fixed<<setprecision(5)<<"R1 = "<<(-b+sqrt(d))/(2*a)<<endl;
        cout<<fixed<<setprecision(5)<<"R2 = "<<(-b-sqrt(d))/(2*a)<<endl;
    }
}
