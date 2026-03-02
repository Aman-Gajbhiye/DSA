#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[N];
    int c = -1;
    int s = sizeof(arr)/sizeof(int);
    for(int i = 0; i < s; i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    for(int i = 0; i < s; i++){
        if(arr[i] == t){
            c = i;
        }
    }
    if(c != -1){
        cout<<c;
    }
    else{
        cout<<-1;
    }
}