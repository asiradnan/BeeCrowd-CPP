#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for (int i=0;i<a;i++){
        int s=0,x,y;
        cin>>x>>y;
        int p=max(x,y);
        int q=min(x,y)+1;
        for (q;q<p;q++){
            if (q%2==1){
                s+=q;
            }
        }
        cout<<s<<endl;
    }
}
