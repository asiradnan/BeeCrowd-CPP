#include <iostream>
using namespace std;
int main()
{
    int a,x=1,y=1,z=1;
    cin>>a;
    while (x<=a){
        y=x*x;
        z=x*x*x;
        cout<<x<<" "<<x*x<<" "<<x*x*x<<endl;
        cout<<x<<" "<<y+1<<" "<<z+1<<endl;
        x++;
    }
}
