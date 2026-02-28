#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout<<"\t";
        }
        for(int j = 1; j <= i; j++){
            cout<<i+j-1<<"\t";
        }
        for(int j = i - 1; j >= 1; j--){
           cout<<i+j-1<<"\t";
        }
        cout<<endl;
    }
    for(int i = n - 1; i >= 1; i--){
        for(int j = 1; j <= n-i; j++){
            cout<<"\t";
        }
        for(int j = 1; j <= i; j++){
            cout<<i+j-1<<"\t";
        }
        for(int j = i - 1; j >= 1; j--){
           cout<<i+j-1<<"\t";
        }
        cout<<endl;
    }
}