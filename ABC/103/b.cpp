#include<bits/stdc++.h>
using namespace std;
int main(){
    string S,T;
    int cnt=0;
    cin>>S>>T;
    while(cnt<T.size()){
        S=S.substr(T.size()-1)+S.substr(0,T.size()-1);
        if(T==S){
            puts("Yes");
            return 0;
        }
      	cnt++;
    }
    puts("No");
    return 0;
}