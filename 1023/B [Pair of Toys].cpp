#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll ans=0;
    if(n>k)
    {
        if(k>=3)
        {
            ans=(k-1)/2;
        }
    }
    else if(k<=2*n-1)
    {
        ans=1+diff(2*n-1,k)/2;
    }
    if(n==1)
        ans=0;
    if(n==2&&k==2)
        ans=0;
    if(k==2)
        ans=0;
    if(n==3&&k==3)
        ans=1;
    if(n>3&&n==k)
        ans--;
    cout<<ans;
    return 0;
}        