#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,h=0,p;
    for (int i=1;i<=10;i++){
        cin>>a;
        if (a>h){
            p=i;
            h=a;
        }
    }
    cout<<h<<"\n"<<p<<endl;
}
