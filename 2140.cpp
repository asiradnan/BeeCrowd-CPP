#include <iostream>
using namespace std;
int main()
{
    int a,b,c[15]={7,12,22,52,102,15,25,55,105,30,60,110,70,120,150};
    while (true){
        cin>>a>>b;
        if (a==0&&b==0){
            break;
        }
        else{
            int flag=0;
            for (int i=0;i<15;i++){
                if ((b-a)==c[i]){
                    flag=1;
                }
            }
            if (flag==1){
                cout<<"possible"<<endl;
            }
            else{
                cout<<"impossible"<<endl;
            }
        }
    }
}
