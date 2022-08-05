#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double c=2,s=1;
    while (c<=100){
        s+=(1/c);
        c++;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
}
