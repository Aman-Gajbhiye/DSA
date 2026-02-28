#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = n-i; j>= 1 ;j--){
            cout<<"\t";
        }
        for(int j = 1; j <= i; j++){
            cout<<j+i-1<<"\t";
        }
        for(int j = i-1; j >= 1; j--){
            cout<<j+i-1<<"\t";
        }
        cout<<endl;
    }
	return 0;
}