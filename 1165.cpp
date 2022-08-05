#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>b;
    for (int j=0;j<b;j++){
        cin>>a;
        int s=0;
        for (int i=1;i<=a;i++){
            if (a%i==0){
                s++;
            }
        }
        if (s==2){
            cout<<a<<" eh primo"<<endl;
        }
        else{
            cout<<a<<" nao eh primo"<<endl;
        }
    }
}
