#include<iostream>
using namespace std;
int greet(){
    cout<<"hello"<<endl;
    greet();
}

int main(){
    greet();
}