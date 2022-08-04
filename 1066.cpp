#include <iostream>
using namespace std;
int main()
{
    int a,even=0,odd=0,pos=0,neg=0;
    for (int i=0;i<5;i++){
        cin>>a;
        if (a>0){
            pos++;
        }
        else if (a<0){
            neg++;
        }
        if (a%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<even<<" valor(es) par(es)\n"<<odd<<" valor(es) impar(es)\n"<<pos<<" valor(es) positivo(s)\n"<<neg<<" valor(es) negativo(s)"<<endl;
}
