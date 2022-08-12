#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for (int i=0;i<a;i++){
        double b,c,mn=10.0,mx=0.0,total=0;
        string x;
        cin>>x>>b;
        for (int j=0;j<7;j++){
            cin>>c;
            total+=c;
            if (c<mn){
                mn=c;
            }
            if (c>mx){
                mx=c;
            }
        }
        cout<<fixed<<setprecision(2)<<x<<" "<<(total-mn-mx)*b<<endl;
    }
}
