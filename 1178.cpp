#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,x[100];
    cin>>a;
    for (int i=0;i<100;i++){
        x[i]=a;
        a/=2;
    }
    for (int k=0;k<100;k++){
        cout<<fixed<<setprecision(4)<<"N["<<k<<"] = "<<x[k]<<endl;
    }
}
