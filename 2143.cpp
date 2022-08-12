#include <iostream>
using namespace std;
int main()
{
    int a,b;
    while (true){
        cin>>a;
        if (a==0){
            break;
        }
        else{
            for (int i=0;i<a;i++){
                cin>>b;
                if (b%2==0){
                    cout<<b*2-2<<endl;
                }
                else{
                    cout<<b*2-1<<endl;
                }
            }
        }
    }
}
