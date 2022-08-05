#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double c=3,d=2,s=1;
    while (c<=39){
        s+=(c/d);
        d*=2;
        c+=2;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
}
