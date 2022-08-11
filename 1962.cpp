#include <iostream>
using namespace std;
int main()
{
    long long int a=0;
    int b;
    cin>>b;
    for (int i=0;i<b;i++){
        cin>>a;
        if (a==2015){
            cout<<"1 A.C."<<endl;
        }
        else if (a>2015){
            cout<<a-2014<<" A.C."<<endl;
        }
        else{
            cout<<2015-a<<" D.C."<<endl;
        }
    }
}
