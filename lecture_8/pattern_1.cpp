#include<iostream>
using namespace std;
// total pattern , 1,3,5,7,9 = 2i - 1
int main(){
    int n;
    cin>>n;
    for(int i = 1;i <= n;i++){
        //spcaes
        for(int j = 1; j <= n-i;j++){
            cout<<"  ";
        }
        for(int j = 1; j<=2*i-1;j++){
            if(j%2 == 0){
                cout<<"! ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    
}