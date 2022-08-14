#include <iostream>
using namespace std;
int main()
{
    unsigned int a,b;
    while (cin>>a>>b){
        unsigned int c,d,e=0;
        for (int i=0;i<a;i++){
            cin>>c>>d;;
            if (c==b && d==0){
                e++;
            }
        }
        cout<<e<<endl;
    }
}
