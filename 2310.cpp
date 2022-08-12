#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b,c,d,e,f,g;
    double p=0,q=0,r=0,s=0,t=0,u=0;
    string x;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>x>>b>>c>>d>>e>>f>>g;
        p+=b;q+=c;r+=d;s+=e;t+=f;u+=g;

    }
    cout<<fixed<<setprecision(2)<<"Pontos de Saque: "<<100*(s/p)<<" %."<<endl;
    cout<<fixed<<setprecision(2)<<"Pontos de Bloqueio: "<<100*(t/q)<<" %."<<endl;
    cout<<fixed<<setprecision(2)<<"Pontos de Ataque: "<<(u/r)*100<<" %."<<endl;
}
