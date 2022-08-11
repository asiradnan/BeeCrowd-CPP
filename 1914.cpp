#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    string p,q,r,s;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>p>>q>>r>>s>>b>>c;
        if ((b+c)%2==0){
            if (q=="PAR"){
                cout<<p<<endl;
            }
            else{
                cout<<r<<endl;
            }
        }
        else{
            if (q=="IMPAR"){
                cout<<p<<endl;
            }
            else{
                cout<<r<<endl;
            }
        }
    }
}
