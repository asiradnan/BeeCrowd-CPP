#include <iostream>
using namespace std;
int main()
{
    int a,b,c=0,d=0;
    cin>>a>>b;
    if (a<b){
        d=a;
    }
    else{
        d=b;
        b=a;
    }
    a=d;
    a++;
    while (a<b){
        if (a%2!=0){
            c+=a;
        }
        a++;
    }
    cout<<c<<endl;
}
