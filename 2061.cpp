#include <iostream>
using namespace std;
int main()
{
    int a,b;
    string x;
    cin>>a>>b;
    for (int i=0;i<b;i++){
        cin>>x;
        if (x=="fechou"){
            a++;
        }
        else{
            a--;
        }
    }
    cout<<a<<endl;
}
