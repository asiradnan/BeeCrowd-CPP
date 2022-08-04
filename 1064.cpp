#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a,b;
    int c=0;
    for(int i=0;i<6;i++){
        cin>>a;
        if (a>=0){
            b+=a;
            c++;
        }
    }
    cout<<c<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<b/c<<endl;
}
