#include <iostream>
using namespace std;
int main()
{
    int a,c;
    for(int i=0;i<5;i++){
        cin>>a;
        if (a%2==0){
            c++;
        }
    }
    cout<<c<<" valores pares"<<endl;
}
