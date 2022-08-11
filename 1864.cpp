#include <iostream>
using namespace std;
int main()
{
    char a[35]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    int b;
    while (cin>>b){
        for (int i=0;i<b-1;i++){
            cout<<a[i];
        }
        cout<<a[b-1]<<endl;
    }
}
