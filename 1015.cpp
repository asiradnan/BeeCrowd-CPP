#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    a=pow(a-c,2);
    c=pow(b-d,2);
    cout<<fixed<<setprecision(4)<<sqrt(a+c)<<endl;
    return 0;
}
