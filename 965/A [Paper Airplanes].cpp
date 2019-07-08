#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k,n,s,p;
    cin>>k>>n>>s>>p;
    int ans;
    if(n%s==0)
        ans=n/s;
    else
        ans=n/s+1;
    ans=ans*k;
    if(ans%p==0)
        cout<<ans/p;
    else
        cout<<ans/p+1;
    
    return 0;
}        