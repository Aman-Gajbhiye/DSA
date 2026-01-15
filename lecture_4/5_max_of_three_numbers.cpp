#include<iostream>
using namespace std;
int main(){
    int a = 8,b = 11,c = 7;
    int max;
    max = a;
    if (max<b){
        max = b;
    }
    else if(max<c){
        max = c;
    }
    cout<<max<<" is maximum";
}
