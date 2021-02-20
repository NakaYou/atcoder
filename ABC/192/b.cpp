#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    bool Yes=true;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            if(isupper(s[i])){
                Yes=false;
            }
        }
        else{
            if(islower(s[i])){
                Yes=false;
            }
        }
    }
    if(Yes){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}