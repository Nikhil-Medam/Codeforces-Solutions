#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
const int N=1e6+5;
ll max(ll a,ll b)
{
    if(a>=b)
        return a;
    else
        return b;
}
ll min(ll a,ll b)
{
    if(a>=b)
        return b;
    else
        return a;
}
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
ll mod(ll a)
{
    if(a>=0)
        return a;
    else
        return -a;
}
void pairsort(ll a[], ll b[], ll n)
{
    pair<ll, ll> pairt[n];
 

    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    sort(pairt, pairt + n);

    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
ll rev(ll n)
{
    ll ans=0;
    while(n)
    {
        ans=ans*10+n%10;
        n=n/10;
    }
    return ans;
}
int isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;        
}
int32_t main()
{
    IOS;
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];  
    }
    for(int i=0;i<n;i++)
    {
      cin>>b[i];  
    }
    pairsort(a,b,n);
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            a[i]=-1;
            b[i]=-1;
            k--;
        }
    }
    a[n-1]=-1;
    b[n-1]=-1;
    k--;
    pairsort(b,a,n);
    int ans=0;
    for(int i=0;i<n&&k;i++)
    {
        if(b[i]!=-1)
        {
            ans+=b[i];
            k--;
        }
    }
    cout<<ans;
    return 0;
}