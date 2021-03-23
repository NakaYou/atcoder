#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp, sum;
    cin >> n;
    temp = n;
    while (temp > 0)
    {
        sum += temp % 10;
        temp /=10;
    }
    if(n%sum == 0){
        puts("Yes");
    }
    else{
        puts("No");
    }
    return 0;
}