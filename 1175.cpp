#include <iostream>
using namespace std;
int main()
{
    int a,x[20];
    for (int i=0;i<20;i++){
        cin>>a;
        x[i]=a;
    }
    for (int i=19;i>=0;i--){
            cout<<"N["<<19-i<<"] = "<<x[i]<<endl;
    }
}
