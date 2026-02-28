#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n-i+1; j++){
            cout<<j<<"\t";
        }
        for(int j = 2*i-3; j >= 1; j--){
            cout<<"\t";
        }
        if(i == 1){
            for(int j = n-i; j >= 1; j--){
            cout<<j<<"\t";
        }
    }
        else{
            for(int j = n-i+1; j >= 1; j--){
            cout<<j<<"\t";
        }
        }
        
        
        cout<<endl;
    }
    return 0;
}