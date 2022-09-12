#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3];
    for (int i=0;i<3;i++){
        int temp;
        cin>>temp;
        a[i]=temp;
        b[i]=temp;
    }
    for (int j=0;j<2;j++){
        for (int i=0;i<2;i++){
            if (b[i]>b[i+1]){
                int temp=b[i+1];
                b[i+1]=b[i];
                b[i]=temp;
            }
        }
    }
    for (int i=0;i<3;i++){
        cout<<b[i]<<endl;
    }
    cout<<endl;
    for (int i=0;i<3;i++){
        cout<<a[i]<<endl;
    }
}
