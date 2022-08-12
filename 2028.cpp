#include <iostream>
using namespace std;
int main()
{
    int caso=1,a;
    while (cin>>a){
        if (a==0){
            cout<<"Caso "<<caso<<": 1 numero"<<endl;
            cout<<0<<endl;
            cout<<endl;
        }
        else{
            int fact=1;
            for (int i=1;i<=a;i++){
                fact+=i;
            }
            cout<<"Caso "<<caso<<": "<<fact<<" numeros"<<endl;
            cout<<"0 ";
            for (int i=0;i<a;i++){
                for (int j=0;j<i;j++){
                    cout<<i<<" ";
                }
            }
            for (int i=0;i<a-1;i++){
                cout<<a<<" ";
            }
            cout<<a<<endl;
            cout<<endl;
        }
        caso++;
    }
}
