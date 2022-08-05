#include <iostream>
using namespace std;
int main()
{
    int a,x[1000],j=0;
    cin>>a;
    for (int i=0;i<1000;i++){
        x[i]=j;
        j++;
        if (j==a){
            j=0;
        }
    }
    for (int k=0;k<1000;k++){
        cout<<"N["<<k<<"] = "<<x[k]<<endl;
    }
}
