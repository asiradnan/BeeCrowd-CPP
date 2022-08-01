#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,b;
    float c;
    cin>>a>>b>>c;
    cout<<"NUMBER = "<<a<<endl;
    cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<(b*c)<<endl;
    return 0;
}
