#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    a*=3.5;
    b*=7.5;
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<(a+b)/11<<endl;
    return 0;
}
