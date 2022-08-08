#include <iostream>
using namespace std;
int main()
{
    int a,b;
    string c;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>c>>b;
        if (c=="Thor"){
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
    }
}
