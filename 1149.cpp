#include <iostream>
using namespace std;
int main()
{
    int a,n=0,s=0;
    cin>>a;
    while (n<=0){
        cin>>n;
    }
    for (int i=0;i<n;i++){
        s+=a;
        a++;
    }
    cout<<s<<endl;
}
