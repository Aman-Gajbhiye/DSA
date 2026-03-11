#include<iostream>
#include<vector>
using namespace std;
void print2DVecor(vector<vector<int>>& v){
    for(int i = 0; i< v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){
    vector<vector<int>> v;
    v.push_back({1,2,3});
    v.push_back({4,5,6});
    v.push_back({7,8,9});

    // read
    print2DVecor(v);

    // update an element
    v[2][2] = 10;

    print2DVecor(v);

    // remove an element
    v[2].erase(v[2].begin() + 2);
    print2DVecor(v);
}