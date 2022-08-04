#include <iostream>
using namespace std;
int main()
{
    int j=1;
    for (float i=0;i<=2.2;i+=.2){
        for (j;j<=3;j++ ){
            cout<<"I="<<i<<" J="<<j+i<<endl;
        }
        j=1;
    }
}
