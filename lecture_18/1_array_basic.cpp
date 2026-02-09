#include<iostream>
using namespace std;
int main(){
    // first
    int arr[5];
    arr[0]=1;
    arr[1]=1;
    arr[2]=1;
    arr[3]=1;
    arr[4]=1;
    //second
    int arr_b[] = {1,2,3,4,5};
    //third
    int n;
    cin>>n;
    int arr_c[n];
    //reading
    int s = sizeof(arr)/sizeof(int);
    for(int i = 0 ; i<s; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //update
    for(int i = 0 ; i<s; i++){
        arr[i]+=i;
    }
    for(int i = 0 ; i<s; i++){
        cout<<arr[i]<<" ";
    }
    }