#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int j=0;
    double c,x[12][12],s=0;
    string b;
    cin>>b;
    for (int i=0;i<12;i++){
        for (j;j<12;j++){
            cin>>c;
            x[i][j]=c;
        }
        j=0;
    }
    int l=5;
    for (int k=7;k<=11;k++){
        while (l<=k-1){
            s+=x[k][l];
            l++;
        }
        l=11-k;
    }
    if (b=="S"){
        cout<<fixed<<setprecision(1)<<s<<endl;
    }
    else{
        cout<<fixed<<setprecision(1)<<s/30<<endl;
    }
}
