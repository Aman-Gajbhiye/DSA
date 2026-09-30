#include<iostream>
using namespace std;

//print 1 to 5
void fun15(int n){
    if(n == 0) return;
    fun15(n-1);
    cout<<n<<endl;
    
}
// print 5 to 1
void fun51(int n){
    if(n == 0) return;
    cout<<n<<endl;
    fun51(n-1);
    
}
// print sum 1 to n
int sum(int n){
    if(n == 0) return 0;
    return sum(n-1) + n;
}
// print factorial
int fac(int n){
    if(n == 0 or n == 1) return 1;
    return fac(n-1) * n;
}
int main(){
    cout<<fac(5);
}