#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin>>n;
    long long ans=0;
    ans=ans+n/100;
    n=n-n/100*100;
    ans=ans+n/20;
    n=n-n/20*20;
    ans=ans+n/10;
    n=n-n/10*10;
    ans=ans+n/5;
    n=n-n/5*5;
    ans=ans+n;
    cout<<ans;
    return 0;
}