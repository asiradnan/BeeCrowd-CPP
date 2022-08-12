#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int b,c,d;
    while (cin>>b){
        double sum=0,idk=0;
        for (int i=0;i<b;i++){
            cin>>c>>d;
            sum+=(c*d);
            idk+=d;
        }
        cout<<fixed<<setprecision(4)<<sum/(idk*100)<<endl;
    }
}
