#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d=0;
    cin>>a;
    cin>>b;
    for (int i=0;i<a-1;i++){
        cin>>c;
        if (c<b){
            if (i+2<d || d==0){
                d=i+2;
            }
        }
        b=c;
    }
    cout<<d<<endl;
}
