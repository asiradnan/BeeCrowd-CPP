#include <iostream>
using namespace std;
int main()
{
    int a,b,two=0,three=0,four=0,five=0;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b;
        if (b%2==0){
            two++;
        }
        if (b%3==0){
            three++;
        }
        if (b%4==0){
            four++;
        }
        if (b%5==0){
            five++;
        }
    }
    cout<<two<<" Multiplo(s) de 2\n"<<three<<" Multiplo(s) de 3\n"<<four<<" Multiplo(s) de 4\n"<<five<<" Multiplo(s) de 5"<<endl;
}
