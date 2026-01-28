#include<iostream>
using namespace std;

// no argument no return
void greet(){
    cout<<"hello"<<endl;
}
//Argument no return
void great(string name){
    cout<<"hello "<<name<<endl;
}
//no argument return
int subtract(){
    int a = 4;
    int b = 2;
    int c = a - b;
    return c;
}
//argument and return
int add(int a, int b){
    int c = a + b;
     return c;
}
//main function
int main(){
greet();
great("Aman");
cout<<subtract();
cout<<add(3,4);

}
