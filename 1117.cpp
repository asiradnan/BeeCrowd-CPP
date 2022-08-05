#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int c;
    double a,s=0;
    while (c<2){
        cin>>a;
        if (a>=0&&a<=10){
            c++;
            s+=a;
        }
        else{
            cout<<"nota invalida"<<endl;
        }
    }
    cout<<fixed<<setprecision(2)<<"media = "<<s/2<<endl;
}
