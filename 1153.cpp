#include <iostream>
using namespace std;
int main()
{
    int a,s=1;
    cin>>a;
    for (a;a>=1;a--){
        s*=a;
    }
    cout<<s<<endl;
}
