#include<iostream>
#include<vector>
using namespace std;
int main(){
    int nums[] = {2,3,-1,8,4};
    int c = 0;
    int s = sizeof(nums)/sizeof(int);
    int sum_left = 0;
        int sum_right = 0;
        int index = 0;
        for(int i = 0; i < s; i++){
            for(int j = 0; j < i; j++){
                sum_left += nums[j];
            }
            for(int k = i + 1; k < s; k++){
                sum_right += nums[k];
            }
            if (sum_left == sum_right){
                c = index;
            }
            index++;
            sum_left = 0;
            sum_right = 0;
        }
        cout<<c;
        
}