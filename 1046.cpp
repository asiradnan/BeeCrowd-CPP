#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if (a>b){
        cout<<"O JOGO DUROU "<<b-a+24<<" HORA(S)"<<endl;}
    else if(a<b) {
        cout<<"O JOGO DUROU "<<b-a<<" HORA(S)"<<endl;}
    else {
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;}
    return 0;
}
