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
void pairsort(string a[], ll b[], ll n)
{
    pair<string, ll> pairt[n];
 

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
void pairsort1(ll a[], char b[], ll n)
{
    pair<ll, char> pairt[n];
 

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
    int n;
    cin>>n;
    vector<int> v[100005];
    int k=0;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v[p].push_back(i);
    }
    for(int i=0;i<100005;i++)
    {
        if(v[i].size()!=0)
        {
            int t=0;
            for(int j=0;j<v[i].size()-1;j++)
                if(v[i][j+1]-v[i][j]!=v[i][1]-v[i][0])
                    t=1;
            if(!t)
                k++;
        }
    }
    cout<<k<<endl;
    for(int i=0;i<100005;i++)
    {
        if(v[i].size()!=0)
        {
            int t=0;
            for(int j=0;j<v[i].size()-1;j++)
                if(v[i][j+1]-v[i][j]!=v[i][1]-v[i][0])
                    t=1;
            if(!t)
            {
                if(v[i].size()==1)
                    cout<<i<<" "<<0<<endl;
                else
                    cout<<i<<" "<<v[i][1]-v[i][0]<<endl;
            }    
        }
    }
    return 0;
}