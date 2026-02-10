#include<iostream>
using namespace std;
// linear search
int main(){
    int n;
    cout<<"enter size of array ";
    cin>>n;
    int n1;
    cout<<"number to find ";
    cin>>n1;
    int flag = 0;
   int arr[n];
   int s = sizeof(arr)/sizeof(int);
   for(int i = 0; i < s; i++){
    cin>>arr[i];
   }
   for(int i = 0; i <= s; i++){
    if(arr[i] == n1){
        cout<<i+1;
        flag = 1;
    }
   }
   if(flag == 0){
    cout<<"not found";
   }
   
}