#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[N];
    int s = sizeof(arr)/sizeof(int);
    for(int i = 0; i < s; i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i = 0; i < s; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<max;

}