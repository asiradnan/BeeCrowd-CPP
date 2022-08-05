#include <iostream>
using namespace std;
int main()
{
    int a,b,x,y;
    while (true){
        int s=0;
        cin>>a>>b;
        if (a<=0 || b<=0){
            break;
        }
        x=min(a,b);
        y=max(a,b);
        for (x;x<=y;x++){
            s+=x;
            cout<<x<<" ";
        }
    cout<<"Sum="<<s<<endl;
    }
}
