#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,cnt=1;
    cin>>n>>k;
    n-=k;
    k--;
    while(n>0){
        n-=k;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}