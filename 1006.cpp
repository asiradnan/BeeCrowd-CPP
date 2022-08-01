#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    a*=2;
    b*=3;
    c*=5;
    cout<<fixed<<setprecision(1)<<"MEDIA = "<<(a+b+c)/10<<endl;
    return 0;
}
