#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double s,x=0;
    double t=0;
    cin>>s;
    s-=2000;
    if (s>2500){
        x=s-2500;
        s-=x;
        t+=(x*.28);
    }
    if (1000<s&& s<=2500){
        x=s-1000;
        s-=x;
        t+=(x*.18);
    }
    if (0<s&&s<=1000){
        t+=(s*.08);
    }
    if (t!=0){
        cout<<fixed<<setprecision(2)<<"R$ "<<t<<'\n';
    }
    else{
        cout<<"Isento\n";
    }
}
