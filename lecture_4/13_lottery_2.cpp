#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=300 && n<=460){
        cout<<"you won a Macbook !"<<endl;
        if(n>=300 && n<=380){
            cout<<"Model:M1 mac";
        }
        else{
            cout<<"Model:M2 mac";
        }
    }
    else if(n>=200 && n<=280){
        cout<<"You won a pack of Kurkure!"<<endl;
        if(n>=200 && n<=240){
            cout<<"Flavour:Chilli Kurkure";
        }
        else{
            cout<<"Flavour:Onion Kurkure";
        }
    }
    else if(n>=1100 && n<=1500){
        cout<<"You won a Cycle!"<<endl;
         if(n>=1100 && n<=1300){
            cout<<"Brand:Avon Cycle";
        }
        else{
            cout<<"Brand:Hero Cycle";
        }
    }
    else if(n>=50 && n<=80){
        cout<<"You won a Bike!"<<endl;
        if(n>=500 && n<=65){
            cout<<"Model:Bullet";
        }
        else{
            cout<<"Model:Rajdoot";
        }
    }
    else {
        cout<<"Better luck next time";
    }
}