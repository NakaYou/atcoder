#include<bits/stdc++.h>
using namespace std;
int main(){
    int d,n,e=1;
    cin>>d>>n;
    while(d--){
        e*=100;
    }
    if(n==100){
        cout<<101*e<<endl;
    }
    else{
        cout<<n*e<<endl;
    }
    return 0;
}