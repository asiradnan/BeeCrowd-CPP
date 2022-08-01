#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    cin>>a;
    cout << fixed<< setprecision(3)<<"VOLUME = " <<(4.0/3)*3.14159*a*a*a<< endl;
    return 0;
}
