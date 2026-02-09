#include<iostream>
using namespace std;
int main(){
    int arr[5]={8,98,-21,49,33};
    int max = INT_MIN;
    int s = sizeof(arr)/sizeof(int);
    for(int i = 0; i < s; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;
}