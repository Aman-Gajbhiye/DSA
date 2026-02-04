#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        if(i == n or i == 1){
        for(int j = 1; j<= n; j++){
        cout<<"* ";
        }
    }
    else{
        for(int j = 1; j<= n; j++){
            if(i == 1 or i == n){
        cout<<"# ";
        }
        else{
            cout<<"* ";
        }
    }
}
    cout<<endl;
    }
}
