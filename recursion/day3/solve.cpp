#include<iostream>
#include<vector>
using namespace std;

void solve(int index, vector<int>& arr, vector<int>& current,
           int sum, int K) {

    // Base Case
    if (index == arr.size()) {

        if (sum == K) {
            for (int x : current) {
                cout << x << " ";
            }

            cout << endl;
        }

        return;
    }

    current.push_back(arr[index]);

    solve(index + 1,
          arr,
          current,
          sum + arr[index],
          K);

    // Backtrack
    current.pop_back();

    solve(index + 1,
          arr,
          current,
          sum,
          K);
}


int main() {

    vector<int> arr = {1, 2, 1};

    int K = 2;

    vector<int> current;
    solve(0,arr,current,0,K);
    return 0;
}