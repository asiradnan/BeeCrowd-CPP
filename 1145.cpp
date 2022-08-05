#include <iostream>
using namespace std;
int main()
{
    int a,b,x=1;
    cin>>a>>b;
    while (x<=b){
        for (int i=1;i<a;i++){
            cout<<x<<" ";
            x++;
        }
        cout<<x<<endl;
        x++;
    }
}
