#include<iostream>
using namespace std;
int main(){
    int n, i = 1,fact = 1;
    cin>>n;
    if(n == 0){
        cout<<fact<<endl;
    }
    else{
    while(i<=n){
        fact = fact * i;
        i++;
    }
    cout<<fact<<endl;
}

}