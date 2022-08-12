#include <iostream>
using namespace std;
int main()
{
    int a,b,c,m;
    cin>>a>>b>>c;
    if (a==b || b==c || a==c){
        cout<<"S"<<endl;
    }
    else{
        m=max(max(a,b),c);
        if (m==(a+b+c-m)){
            cout<<"S"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
    }
}
