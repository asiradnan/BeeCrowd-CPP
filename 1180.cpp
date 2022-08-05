#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    int x[a];
    for (int i=0;i<a;i++){
        cin>>b;
        x[i]=b;
    }
     int m=x[0],p=0;
     for (int j=0;j<a;j++){
        if (x[j]<m){
            m=x[j];
            p=j;
        }
     }
    cout<<"Menor valor: "<<m<<"\nPosicao: "<<p<<endl;
}
