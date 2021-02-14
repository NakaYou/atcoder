#include<bits/stdc++.h>
#include <regex>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<regex_replace(s,regex(",")," ")<<endl;
    return 0;
}