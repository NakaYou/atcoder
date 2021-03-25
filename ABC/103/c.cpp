#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,tmp,sum=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>tmp;
        sum+=tmp-1;
    }
    cout<<sum<<endl;
    return 0;
}