#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c,d,e;
    cin>>a>>b>>c>>d;
    e=((a*2)+(b*3)+(c*4)+d)/10;
    cout<<fixed<<setprecision(1)<<"Media: "<<e<<endl;
    if (e>=7.0){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(e<5.0){
        cout<<"Aluno reprovado."<<endl;
    }
    else {
        cout<<"Aluno em exame."<<endl;
        cin>>a;
        b=(e+a)/2;
        cout<<fixed<<setprecision(1)<<"Nota do exame: "<<a<<endl;
        if (b>=5.0){
            cout<<"Aluno aprovado."<<endl;
        }else{
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<fixed<<setprecision(1)<<"Media final: "<<b<<endl;
    }
}
