#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    b=a/365;
    c=a%365;
    cout<<b<<" ano(s)"<<endl;
    b=c/30;
    c=c%30;
    cout<<b<<" mes(es)"<<endl;
    cout<<c<<" dia(s)"<<endl;
}
