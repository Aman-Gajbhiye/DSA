#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if (i == 1 or i == 2){
            for(int j = 1; j <= i; j++){
            cout<<i<<"\t";
        }
        }
        else{
            cout<<i<<"\t";
            for(int j = i-2; j >= 1 ; j--){
                cout<<0<<"\t";
            }
            cout<<i<<"\t";
        }
        cout<<endl;
    }
}