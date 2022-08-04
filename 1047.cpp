#include <iostream>
using namespace std;
int main()
{
    int h1,m1,h2,m2;
    cin>>h1>>m1>>h2>>m2;
    if (h2>h1){
        if (m2>=m1){
            cout<<"O JOGO DUROU "<<h2-h1<<" HORA(S) E "<<m2-m1<<" MINUTO(S)"<<endl;
        }
        else{
             cout<<"O JOGO DUROU "<<h2-h1-1<<" HORA(S) E "<<m2-m1+60<<" MINUTO(S)"<<endl;
        }
    }
    else if(h2==h1){
        if (m2>m1){
            cout<<"O JOGO DUROU "<<h2-h1<<" HORA(S) E "<<m2-m1<<" MINUTO(S)"<<endl;
        }
        else if (m2==m1){
             cout<<"O JOGO DUROU "<<h2-h1+24<<" HORA(S) E "<<m2-m1<<" MINUTO(S)"<<endl;
        }
        else{
            cout<<"O JOGO DUROU "<<h2-h1+23<<" HORA(S) E "<<m2-m1+60<<" MINUTO(S)"<<endl;
        }
    }
    else{
        if (m2>=m1){
            cout<<"O JOGO DUROU "<<h2-h1+24<<" HORA(S) E "<<m2-m1<<" MINUTO(S)"<<endl;
        }
        else{
             cout<<"O JOGO DUROU "<<h2-h1+23<<" HORA(S) E "<<m2-m1+60<<" MINUTO(S)"<<endl;
        }
    }
}
