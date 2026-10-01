#include<iostream>
using namespace std;
void print(int i, int a[], int n){
    if(i == n) return;
    cout<<a[i];
    print(i+1,a,n);
}
int main(){
    int a[] = {1,2,3,4,5};
    print(0,a,5);
}