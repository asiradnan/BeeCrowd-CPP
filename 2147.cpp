#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int x;
    string a;
    cin>>x;
    for (int i=0;i<x;i++){
        cin>>a;
        cout<<fixed<<setprecision(2)<<a.length()/100.0<<endl;
    }
}
