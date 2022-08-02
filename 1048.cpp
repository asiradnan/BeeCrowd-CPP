#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b;
    cin>>a;
    if (a<=400){
        b=a*.15;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<a+b<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<b<<endl;
        cout<<"Em percentual: 15 %"<<endl;}
    else if(400<a && a<=800){
        b=a*.12;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<a+b<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<b<<endl;
        cout<<"Em percentual: 12 %"<<endl;}
    else if(800<a && a<=1200){
        b=a*.1;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<a+b<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<b<<endl;
        cout<<"Em percentual: 10 %"<<endl;}
    else if(1200<a && a<=2000){
        b=a*.07;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<a+b<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<b<<endl;
        cout<<"Em percentual: 7 %"<<endl;}
    else if(2000<a){
        b=a*.04;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<a+b<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<b<<endl;
        cout<<"Em percentual: 4 %"<<endl;}
    return 0;
}
