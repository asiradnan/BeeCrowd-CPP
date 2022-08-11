#include <iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a){
        int m=0;
        for (int i=0;i<a;i++){
            cin>>b;
            if (b>m){
                m=b; 
            }
        }
        if (m<10){
            cout<<1<<endl;
        }
        else if(10<=m && m<20){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
    }
}
