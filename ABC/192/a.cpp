#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x%100==0){
        cout<<100<<endl;
        return 0;
    }
    for(int i=x;;i++){
        if(i%100==0){
            cout<<i-x<<endl;
            return 0;
        }
    }
}