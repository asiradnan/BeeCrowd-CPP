#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    double total=0;
    for (int i=0;i<a;i++){
        cin>>b>>c;
        switch (b){
            case 1001:
                total+=(1.5*c);
                break;
            case 1002:
                total+=(2.5*c);
                break;
            case 1003:
                total+=(3.5*c);
                break;
            case 1004:
                total+=(4.5*c);
                break;
            case 1005:
                total+=(5.5*c);
        }
    }
    cout<<fixed<<setprecision(2)<<total<<endl;
}
