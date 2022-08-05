#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    for (int i=1;i<=a;i++){
        cin>>b>>c;
        int d=0,s=0;
        while (d<c){
            if (b%2==1){
                s+=b;
                d++;
            }
            b++;
        }
        cout<<s<<endl;
    }
}
