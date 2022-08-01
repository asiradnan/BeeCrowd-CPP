#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    cout<<a<<endl;
    int c=a%100;
    a=a/100;
    cout << a<<" nota(s) de R$ 100,00" << endl;
    a=c/50;
    c=c%50;
    cout << a<<" nota(s) de R$ 50,00" << endl;
    a=c/20;
    c=c%20;
    cout << a<<" nota(s) de R$ 20,00" << endl;
    a=c/10;
    c=c%10;
    cout << a<<" nota(s) de R$ 10,00" << endl;
    a=c/5;
    c=c%5;
    cout << a<<" nota(s) de R$ 5,00" << endl;
    a=c/2;
    c=c%2;
    cout << a<<" nota(s) de R$ 2,00" << endl;
    a=c/1;
    cout << a<<" nota(s) de R$ 1,00" << endl;
    return 0;
}
