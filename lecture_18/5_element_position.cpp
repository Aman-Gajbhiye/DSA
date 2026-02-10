#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array ";
    cin>>n;
    int n1;
    cout<<"number to find ";
    cin>>n1;
   int arr[n];
   int count = 0;
   int s = sizeof(arr)/sizeof(int);
   for(int i = 0; i < s; i++){
    cin>>arr[i];
   }
   for(int i = 0; i <= s; i++){
    count++;
    if(arr[i] == n1){
        cout<<count;
    }
   }
}