#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a;
    b=a%3600;
    a/=3600;
    c=b%60;
    d=b/60;
    cout << a<<":"<<d<<":"<<c << endl;
    return 0;
}
