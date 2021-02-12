#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    bool TWin=false;
    cin>>a>>b>>c;
    if(c==0){
        if(a>b){
            TWin=true;
        }
    }
    if(c==1){
        if(a>=b){
            TWin=true;
        }
    }
    if(TWin)cout<<"Takahashi"<<endl;
    else cout<<"Aoki"<<endl;
}