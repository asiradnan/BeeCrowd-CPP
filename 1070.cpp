#include <iostream>
using namespace std;
int main()
{
    int a,c=0;
    cin>>a;
    while (c<6){
        if (a%2!=0){
            cout<<a<<endl;
            c++;
        }
        a++;
    }
}
