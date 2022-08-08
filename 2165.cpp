#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    getline (cin,a);
    if (a.length() <=140){
        cout<<"TWEET"<<endl;
    }
    else{
        cout<<"MUTE"<<endl;
    }
}
