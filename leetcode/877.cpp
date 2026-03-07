#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> piles;
    piles.push_back(3);
    piles.push_back(7);
    piles.push_back(2);
    piles.push_back(3);
    int sum_alice = 0;
        int sum_bob = 0;
        int s = piles.size();
        for(int i = 1; i <= s; i++){
            if(i % 2 != 0){
                if(piles[0] >= piles[piles.size()-1]){
                    sum_alice += piles[0];
                    piles.erase(piles.begin());
                }
                else{
                    sum_alice += piles[piles.size()-1];
                    piles.pop_back();
                }
            }
        else{
            if(piles[0] >= piles[piles.size()-1]){
                    sum_bob += piles[0];
                    piles.erase(piles.begin());
                }
                else{
                    sum_bob += piles[piles.size()-1];
                    piles.pop_back();
                }
            }
        }
        cout<<sum_alice<<"  "<<sum_bob<<"  "<<s;

}
