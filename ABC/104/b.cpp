#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    bool AC=true;
    int Ccnt=0;
    cin>>S;

    if(S[0]!='A'){
        AC=false;
    }
    
    for(int i=1;i<S.size();i++){

        if(isupper(S[i]) && S[i]!='C'){
            AC=false;
        }
        if(S[i]=='C'){
            if(i>=2 && i<=S.size()-2){
            Ccnt++;
            }
            else{
                AC=false;
            }
        }
    }
    if(Ccnt!=1){
        AC=false;
    }

    if(AC){
        puts("AC");
    }
    else{
        puts("WA");
    }
    return 0;
}