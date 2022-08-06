#include <iostream>
using namespace std;
int main()
{
    int a,gas=0,al=0,di=0;
    while(true){
        cin>>a;
        if (a==1){
            al++;
        }
        else if(a==2){
            gas++;
        }
        else if(a==3){
            di++;
        }
        else if(a==4){
            break;
        }
    }
    cout<<"MUITO OBRIGADO\nAlcool: "<<al<<"\nGasolina: "<<gas<<"\nDiesel: "<<di<<endl;
}
