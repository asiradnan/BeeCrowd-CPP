#include <iostream>
using namespace std;
int main()
{
    int c=0;
    string b;
    cin>>b;
    for (int i=0;i<b.length();i++){
        if (b[i]=='1'){
            c++;
        }
    }
    if (c%2==0){
        cout<<b<<"0"<<endl;
    }
    else{
        cout<<b<<1<<endl;
    }
}
