#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    double d;
    while (true){
        cin>>a;
        if (a==0){
            break;
        }
        else{
            cin>>b>>c;
            d=(a*b)*(100.0/c);
            int i=0;
            while ((i*i)<=d){
                i++;
            }
            cout<<i-1<<endl;
        }
    }
}
