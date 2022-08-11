#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e=0;
    cin>>a>>b>>c;
    for (int i=0;i<b-1;i++){
        cin>>d;
        if (d-c>a || d-c<-a){
            e=1;
        }
        c=d;
    }
    if (e==0){
        cout<<"YOU WIN"<<endl;
    }
    else{
        cout<<"GAME OVER"<<endl;
    }
}
