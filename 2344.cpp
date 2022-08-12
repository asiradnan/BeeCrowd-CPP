#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if (a==0){
        cout<<"E"<<endl;
    }
    else if(35>=a&&a>=1){
        cout<<"D"<<endl;
    }
    else if(60>=a&&a>=35){
        cout<<"C"<<endl;
    }
    else if(85>=a&&a>=61){
        cout<<"B"<<endl;
    }
    else if(100>=a&&a>=86){
        cout<<"A"<<endl;
    }
}
