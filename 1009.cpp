#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string a;
    double b,c,d;
    cin>>a>>b>>c;
    d+=b;
    d+=(c*.15);
    cout << fixed<<setprecision(2)<<"TOTAL = R$ " <<d<< endl;
    return 0;
}
