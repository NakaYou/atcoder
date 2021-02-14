#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d1,d2,cnt=0;
    bool yes=false;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d1>>d2;
        if(d1==d2){
            cnt++;
            if(cnt==3)yes=true;
        }
        else{
            cnt=0;
        }
    }
    if(yes)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}