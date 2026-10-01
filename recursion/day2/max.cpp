#include<iostream>
#include<vector>
using namespace std;
int maxi(int i, vector<int> &a, int n){
    if(i == n) return a[i];
    return max(a[i],maxi(i+1,a,n));
}
int main(){
    vector<int> a;
    a.push_back(21);
    a.push_back(20);
    a.push_back(18);
    a.push_back(200);
    a.push_back(10);
    int n = a.size();
    cout<<maxi(0,a,n);
}
