#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b;
    int c;
    cin>>c;
    for (int i=0;i<c;i++){
        cin>>a>>b;
        if (b==0){
            cout<<"divisao impossivel"<<endl;
        }
        else{
            cout<<fixed<<setprecision(1)<<a/b<<endl;
        }
    }
}
