#include <iostream>
using namespace std;
int main()
{
    int a,b,c,x,y,z;
    cin>>a>>b>>c;
    x=(b*2)+(c*4);
    y=(a*2)+(c*2);
    z=(a*4)+(b*2);
    cout<<min(min(x,y),z)<<endl;
}
