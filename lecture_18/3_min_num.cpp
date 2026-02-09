#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int min = INT_MAX;
    int s = sizeof(arr)/sizeof(int);
    for(int i = 0; i < s; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < s; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<min;
}