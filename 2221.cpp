#include <iostream>
using namespace std;
int main()
{
    int a,bonus,x1,x2,x3,y1,y2,y3;
    double p1,p2;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>bonus>>x1>>x2>>x3>>y1>>y2>>y3;
        if (x3%2==0){
            p1=(x1+x2)/2.0+bonus;
        }
        else{
            p1=(x1+x2)/2.0;
        }
        if (y3%2==0){
            p2=(y1+y2)/2.0+bonus;
        }
        else{
            p2=(y1+y2)/2.0;
        }
        if (p1>p2){
            cout<<"Dabriel"<<endl;
        }
        else if(p1<p2){
            cout<<"Guarte"<<endl;
        }
        else{
            cout<<"Empate"<<endl;
        }
    }
}
