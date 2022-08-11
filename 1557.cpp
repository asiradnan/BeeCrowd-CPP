#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int a=1,c,d;
    while (true){
        cin>>d;
        if (d==0){
            break;
        }
        else{
            int b[d][d];
            c=a;
            for (int i=0;i<d;i++){
                for (int j=0;j<d;j++){
                    b[i][j]=a;
                    a*=2;
                }
                c*=2;
                a=c;
            }
            string x= to_string(b[d-1][d-1]);
            int y =x.length();
            int p=0;
            for (int i=0;i<d;i++){
                for (int j=0;j<d-1;j++){
                    cout<<setw(y)<<b[i][j]<<" ";
                    p=j+1;
                }
                cout<<setw(y)<<b[i][p]<<endl;
            }
        }
        a=1;
        cout<<endl;
    }
}
