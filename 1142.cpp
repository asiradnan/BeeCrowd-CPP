#include <iostream>
using namespace std;
int main()
{
    int a,x=1,y=2,z=3;
    cin>>a;
    for (int i=0;i<a;i++){
        cout<<x<<" "<<y<<" "<<z<<" PUM"<<endl;
        x+=4;
        y+=4;
        z+=4;
    }
}
