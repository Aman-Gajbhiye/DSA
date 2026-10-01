#include<iostream>
#include<vector>
using namespace std;
bool isSorted(int i, vector<int> a, int n){
    if(i == n-1) return true;
    if(a[i]<a[i-1]) return false;
    return true;
    return isSorted(i+1,a,n);
}
int main(){
    vector<int> a;
    int n = a.size();
    a.push_back(2);
    a.push_back(1);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    cout<<isSorted(1,a,n);
}
