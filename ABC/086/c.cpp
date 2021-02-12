#include<bits/stdc++.h>
using namespace std;
int posnum(int suti);
int main (){
    int n,t=0,x=0,y=0;
    bool can=true;
    cin>>n;
    for(int i=0;i<n;i++){
        int ti,xi,yi;
        cin>>ti>>xi>>yi;
        int henka = posnum(xi-x)+posnum(yi-y);
        if(ti-t<henka){
            can=false;
        }
        if((ti-t)%2!=henka%2){
            can=false;
        }
        t=ti,x=xi,y=yi;
    }
    if(can)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int posnum(int suti){
    if(suti<0)return -suti;
    else return suti;
}