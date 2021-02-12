#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,d,i,x,y;
    bool can=false;
    cin>>n>>s>>d;
    for(i=0;i<n;i++){
        cin>>x>>y;
        if(x<s && y>d){
            can=true;
        }
    }
    if(can)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}