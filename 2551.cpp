#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    while (cin>>a>>b>>c){
        int e=0;
        for (int i=0;i<a;i++){
            cin>>d;
            if (d<=c && d>=b){
                e++;
            }
        }
        cout<<e<<endl;
    }
}
