#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    x=max(x,y);
    cout<<max(x,z)<<" eh o maior"<<endl;
    return 0;
}
