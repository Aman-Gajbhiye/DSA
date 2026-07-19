#include<iostream>
using namespace std;

int main(){
    int ans = 0;
    int n = 10203004;
    while(n > 0){
            int d = n % 10;
            if(d != 0){
                ans = ans * 10 + d;
            }
            n = n/10;
        }
        cout<<ans;
int rev = 0;
while(ans > 0){
            int d = ans % 10;
            if(d != 0){
                rev = rev * 10 + d;
            }
            ans = ans/10;
        }
        cout<<rev;
}
