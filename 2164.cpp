#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int a;
    cin>>a;
    double b=pow(((1+pow(5,.5))/2),a)-pow(((1-pow(5,.5))/2),a);
    cout<<fixed<<setprecision(1)<<b/pow(5,.5)<<endl;
}
