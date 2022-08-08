#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    getline (cin,a);
    if (a.length()<=80){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}
