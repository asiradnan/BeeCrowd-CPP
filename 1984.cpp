#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long int a;
    cin>>a;
    string b= to_string(a);
    int l=b.length()-1;
    while (l>0){
        cout<<b[l];
        l--;
    }
    cout<<b[0]<<endl;
}
