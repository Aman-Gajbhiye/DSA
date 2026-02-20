#include<iostream>
using namespace std;
int main(){
    int n = 4;
        int sum_even = 0;
        int sum_odd = 0;
        int count_even = 0;
        int count_odd = 0;
        int i = 1;
        int j = 1;
        while(count_even < n){
            if(i % 2 == 0){
                count_even++;
                sum_even = sum_even + i;
            }
            i++;
        }
         while(count_odd < n){
            if(j % 2 != 0){
                count_odd++;
                sum_odd = sum_odd + j;
            }
            j++;
        }
        int a = sum_even;
        int b = sum_odd;
        cout<<a<<endl;
        cout<<b<<endl;
        while(b != 0){
            int t = a%b;
            a = b;
            b = t;
        }
        return a;
}