#include<iostream>
using namespace std;
int fibbo(int n){
    //base
    if(n == 0 or n ==1){
        return n;
    }
    //recursion
    return fibbo(n-1)+fibbo(n-2);
}
int main(){
    int m;
    cin>>m;
    cout<<fibbo(m)<<endl;

}