#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(){
    int nums[] = {1,7,3,6,5,6};
    int s = sizeof(nums)/sizeof(int);
    int sum_left = 0;
        int sum_right = 0;
        int index = 0;
        int count = 0;
        for(int i = 0; i < s; i++){
            int pivot = i;
            for(int j = 0; j <= i; j++){
                sum_left += nums[j];
            }
            for(int k = i+2 ; k < s; k++){
                sum_right += nums[k];
            }
             cout<<sum_left<<endl;
                cout<<sum_right;
                cout<<endl<<endl;
            // index++;
            if(sum_left != sum_right){
                count++;
                sum_left = 0;
                sum_right = 0;
               
            }
            else{
                sum_left = 0;
                sum_right = 0;
            }
        }
        if(count == 1){
            return index;
        }
        else{
            return -1;
        }
    
}