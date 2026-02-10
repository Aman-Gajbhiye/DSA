#include<iostream>
#include<vector>
using namespace std;
int main(){
    //initialization
    vector<int> a;
    //update
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);

    //size
    cout<<a.size()<<endl;

    // capacity
    cout<<a.capacity()<<endl;
    
    // delete
    a.pop_back();

    // insert begin
    a.insert(a.begin()+2,6);

    // inset end;
    a.insert(a.end()-2,7);

    for(int i = 0; i <= a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // front element
    cout<<a.front()<<endl;
    // last element
    cout<<a.back()<<endl;
}