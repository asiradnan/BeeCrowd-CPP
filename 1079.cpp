#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    double x,y,z;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>x>>y>>z;
        cout<<fixed<<setprecision(1)<<(x*2+y*3+z*5)/10<<endl;
    }
}
