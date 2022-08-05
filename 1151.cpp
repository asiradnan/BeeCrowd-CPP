#include <iostream>
using namespace std;
int main()
{
    int a=0,b=1,z=0,n;
    cin>>n;
    for (int i=1;i<n;i++){
        if (i<=2){
        cout<<z<<" ";
        z=a+b;
        }
        else{
            cout<<z<<" ";
            a=b;
            b=z;
            z=a+b;
        }
    }
    cout<<z<<endl;
}
