#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
int gcd(int a, int b)
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,d;
    cin>>n>>m>>d;
    ll a[n],b[n],c[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=i+1;
    }
    pairsort(a,b,n);
    ll k=n;
    int p=0;
    while(p==0)
    {
        p=1;
        ll df=n+1-k;
        for(int i=0;i<k-1;i++)
        {
            if(a[i+df]<=a[i]+d)
            {
                p=0;
                break;
            }
        }
        if(p==0)
            k--;
    }
    k=n+1-k;
    cout<<k<<endl;
    for(int i=0;i<n;i++)
    {
        c[i]=i%k;
        c[i]++;
    }
    pairsort(b,c,n);
    for(int i=0;i<n;i++)
        cout<<c[i]<<" ";
    return 0;
}        