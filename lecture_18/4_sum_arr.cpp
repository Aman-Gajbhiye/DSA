#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    int s = sizeof(arr)/sizeof(int);
    for(int i = 0; i < s; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < s; i++){
        sum = sum + arr[i];
    }
    cout<<sum;
}