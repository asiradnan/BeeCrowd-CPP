#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,c=0;
    double s=0.0;
    while (true){
        cin>>a;
        if (a<0){
            break;
        }
        else{
            c++;
            s+=a;
        }
    }
    cout<<fixed<<setprecision(2)<<s/c<<endl;
}
