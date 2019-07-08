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
long long C(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

ll mod = 1e9+7;
ll modexpo(ll x,ll p)
{
    ll res = 1;
    x = x%mod;
    while(p)
    {
        if(p%2)
        {
            res = res * x;
        }
        p >>= 1;
        x = x*x % mod;
        res %= mod;
    }
    return res;
}
int32_t main()
{
    IOS;
    int n,k;
    cin>>n>>k;
    int a[n],b[n],c[n],d[n],e[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        e[i]=a[i];
        b[i]=i;
    }
    pairsort(e,b,n);
    for(int i=0;i<n;i++)
        cin>>c[i];
    if(k==0)
    {
        for(int i=0;i<n;i++)
            cout<<c[i]<<" ";
        return 0;    
    }
    pairsort(a,c,n);    
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        if(v.size()<k)
        {
            v.push_back(c[i]);
            int s=0;
            for(int i=0;i<v.size();i++)
                s+=v[i];
            d[i]=s;
            sort(v.begin(),v.end());
        }
        else
        {
            d[i]=c[i];
            int s=0;
            for(int i=0;i<v.size();i++)
                s+=v[i];
            d[i]+=s;    
            if(c[i]>v[0])
            {
                v[0]=c[i];
                sort(v.begin(),v.end());
            }
        }
    }
    pairsort(b,d,n);
    for(int i=0;i<n;i++)
        cout<<d[i]<<" ";
    return 0;
}