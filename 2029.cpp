#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b;
    while (cin>>a>>b){
        double height=(a/(3.14*(b/2)*(b/2)));
        cout<<fixed<<setprecision(2)<<"ALTURA = "<<height<<endl;
        cout<<fixed<<setprecision(2)<<"AREA = "<<(3.14*(b/2)*(b/2))<<endl;
    }
}
