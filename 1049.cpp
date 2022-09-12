#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    if (a=="vertebrado"){
        cin>>a;
        if (a=="ave"){
            cin>>a;
            if (a=="carnivoro"){
                cout<<"aguia\n";
            }
            else{
                cout<<"pomba\n";
            }
        }
        else{
            cin>>a;
            if (a=="onivoro"){
                cout<<"homem\n";
            }
            else{
                cout<<"vaca\n";
            }
        }
    }
    else{
        cin>>a;
        if (a=="inseto"){
            cin>>a;
            if (a=="hematofago"){
                cout<<"pulga\n";
            }
            else{
                cout<<"lagarta\n";
            }
        }
        else{
            cin>>a;
            if (a=="hematofago"){
                cout<<"sanguessuga\n";
            }
            else{
                cout<<"minhoca\n";
            }
        }
    }
}

