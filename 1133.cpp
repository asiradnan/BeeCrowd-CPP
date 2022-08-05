#include <iostream>
using namespace std;
int main()
{
    int a,b,x,y,s=0;
    cin>>a>>b;
    y=max(a,b);
    x=min(a,b)+1;
    for (x;x<y;x++){
        if (x%5==2||x%5==3){
            cout<<x<<endl;
        }
    }
}
