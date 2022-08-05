#include <iostream>
using namespace std;
int main()
{
    int a,b,x,y,s=0;
    cin>>a>>b;
    y=max(a,b);
    x=min(a,b);
    for (x;x<=y;x++){
        if (x%13!=0){
            s+=x;
        }
    }
    cout<<s<<endl;
}
