#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll f[n],t[n];
    cin>>f[0]>>t[0];
    ll ans;
    if(t[0]>k)
        ans=f[0]+k-t[0];
    else
        ans=f[0];
    for(int i=1;i<n;i++)
    {
        cin>>f[i]>>t[i];
        ll p;
        if(t[i]>k)
            p=f[i]+k-t[i];
        else
            p=f[i];
        if(p>ans)
            ans=p;
    }
    cout<<ans;
    return 0;
}        