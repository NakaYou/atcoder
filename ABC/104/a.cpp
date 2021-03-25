#include<bits/stdc++.h>
using namespace std;
int main(){
    int R;
    cin>>R;
    if(R<1200){
        puts("ABC");
    }
    else if(R<2800){
        puts("ARC");
    }
    else{
        puts("AGC");
    }
    return 0;
}