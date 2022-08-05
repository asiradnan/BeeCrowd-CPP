#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,j=0;
    double c,x[12][12],s=0;
    cin>>a;
    string b;
    cin>>b;
    for (int i=0;i<12;i++){
        for (j;j<12;j++){
            cin>>c;
            x[i][j]=c;
        }
        j=0;
    }
    for (int k=0;k<12;k++){
        s+=x[a][k];
    }
    if (b=="S"){
        cout<<fixed<<setprecision(1)<<s<<endl;
    }
    else{
        cout<<fixed<<setprecision(1)<<s/12<<endl;
    }
}
