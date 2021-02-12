#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string a,b;
    int ab;
    cin>>a>>b;
    ab=atoi((a+b).c_str());
    double ans = sqrt(ab);
    int intans = sqrt(ab);
    if(ans==intans)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}