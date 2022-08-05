#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int c;
    double a,s;
    while (c<2){
        cin>>a;
        if (a>=0&&a<=10){
            c++;
            s+=a;
        }
    }
    cout<<fixed<<setprecision(2)<<"media = "<<s/2<<endl;
}
