#include<iostream>
#include<vector>
using namespace std;
bool ls(int i, vector<int> &a, int n, int target){
    if(i == n) return false;
    if(a[i] == target) return true;
    return ls(i+1,a,n,target);
}
int main(){
    vector<int> a;
    a.push_back(21);
    a.push_back(20);
    a.push_back(18);
    a.push_back(200);
    a.push_back(10);
    int n = a.size();
    cout<<ls(0,a,n,11);
}