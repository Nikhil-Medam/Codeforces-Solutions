#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll diff(ll a, ll b)
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
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        sum=sum+diff(i+1,a[i]);
    }
    cout<<sum;
    return 0;
}        