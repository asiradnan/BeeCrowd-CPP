#include <iostream>
using namespace std;
int main()
{
    int a;
    while (true){
        cin>>a;
        if (a==0){
            break;
        }
        int d=0,s=0;
        while (d<5){
            if (a%2==0){
                s+=a;
                d++;
            }
            a++;
        }
        cout<<s<<endl;
    }
}
