#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a,t,u;
    while (cin>>a){
        t=a[0];
        int h=stoi(t);
        t=a[a.length()-2];
        u=a[a.length()-1];
        int m=stoi(t+u);
        if (h<7){
            cout<<"Atraso maximo: 0"<<endl;
        }
        else if(h==7){
            cout<<"Atraso maximo: "<<m<<endl;
        }
        else{
            cout<<"Atraso maximo: "<<((h-8)*60)+m+60<<endl;
        }
    }
}
