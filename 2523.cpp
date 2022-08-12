#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    int b,c;
    while (cin>>a>>b){
        string d="";
        for (int i=0;i<b;i++){
            cin>>c;
            char t=a[c-1];
            d.push_back(t);
        }
        cout<<d<<endl;
    }
}
