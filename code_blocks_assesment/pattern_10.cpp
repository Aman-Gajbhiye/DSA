#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int z = m*2;
    int n = (z+1)/2;
for(int i = 1; i<=n; i++){
    //outer star
    for(int j = 1; j <= n-i; j++){
        cout<<"*";
    }
    cout<<"*";
    //inner space 
    for(int j = 1;j<=2*i-3;j++){
        cout<<" ";
    }
    //star
    if(i == 1){
        for(int j = 1; j <= n-i; j++){
        cout<<"*";
    }
}
    else{
        for(int j = 1; j <= n-i+1; j++){
        cout<<"*";
    }
    
    }

    cout<<endl;
}
for(int i = n-1; i>=1; i--){
    //outer space
    for(int j = 1; j <= n-i; j++){
        cout<<"*";
    }
    cout<<"*";
    //inner space 
    for(int j = 1;j<=2*i-3;j++){
        cout<<" ";
    }
    //star
    if(i == 1){
        for(int j = 1; j <= n-i; j++){
        cout<<"*";
    }
}
    else{
        for(int j = 1; j <= n-i+1; j++){
        cout<<"*";
    }
    
    }

    cout<<endl;
}

    return 0;
}