#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,min,max,tmp;
    cin>>N;
    cin>>min;
    max=min;
    for(int i=0;i<N-1;i++){
        cin>>tmp;
        if(tmp>max){
            max=tmp;
        }
        else if(tmp<min){
            min=tmp;
        }
    }
    cout<<max-min<<endl;
    return 0;
}