#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=300 && n<=460){
        cout<<"you won a Macbook";
        if(n>=300 && n<=380){
            cout<<"Model:M1 mac";
        }
        else{
            cout<<"Model:M2 mac";
        }
    }
    else if(n>=200 && n<=280){
        cout<<"Kurkure";
        if(n>=300 && n<=380){
            cout<<"Model:M1 mac";
        }
        else{
            cout<<"Model:M2 mac";
        }
    }
    else if(n>=1100 && n<=1500){
        cout<<"Cycle";
    }
    else if(n>=50 && n<=80){
        cout<<"Bike";
    }
    else {
        cout<<"better luck next Time";
    }
}