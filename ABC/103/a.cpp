#include<bits/stdc++.h>
using namespace std;
int main(){
    int tmp,max,min;
    cin>>tmp;
    max=tmp;
    min=tmp;
    for(int i=0;i<2;i++){
        cin>>tmp;
        if(tmp<min){
            min=tmp;
        }
        else if(tmp>max){
            max=tmp;
        }
    }
    cout<<max-min<<endl;
    return 0;
}