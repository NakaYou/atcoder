#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    for(int a=1;a<n;a++){
        int b=(n-1)/a;
        cnt+=b;
    }
    cout<<cnt<<endl;
    return 0;
}