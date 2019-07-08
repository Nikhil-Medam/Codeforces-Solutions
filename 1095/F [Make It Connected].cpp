#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
#define pb push_back
const int N=2e5+5;
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
void pairsort(int a[], int b[], ll n)
{
    pair<int, int> pairt[n];
 

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
    return __gcd(a,b); 
}
int isPrime(int n)
{
    if(n < 2)
        return 0;
    if(n < 4)
        return 1;
    if(n % 2 == 0 or n % 3 == 0)
        return 0;
    for(int i = 5; i*i <= n; i += 6)
        if(n % i == 0 or n % (i+2) == 0)
            return 0;
    return 1;
}
long long C(int n, int r) {
    if(r > n - r) r = n - r;
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
ll mod = 1e9+7;
const int M = 2e5+3;
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

struct edge
{
    int u, v, w;
    bool operator<(const edge& e)
    {
        return w<e.w;
    }
};
int parent[N];
int getParent(int u)
{
    return parent[u] = u==parent[u]?u:getParent(parent[u]);
}
void unionFind(int u,int v)
{
    int up = getParent(u);
    int vp = getParent(v);
    parent[vp] = up;
}

int32_t main()
{
    IOS;
    int n,m,a,i,b,c;
    cin>>n>>m;
    vector <int> v;
    
    int idx = 0,mn = 1e18;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.pb(a);
        if(a<mn)
        {
            mn = a;
            idx = i+1;
        }
    }
    vector<edge> e;
    for(i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        edge ed;
        ed.u = a;
        ed.v = b;
        ed.w = c;
        e.pb(ed);
    }
    for(i=1;i<=n;i++)
    {
        if(i==idx)
        continue;
        edge ed;
        ed.u = idx;
        ed.v = i;
        ed.w = v[i-1] + v[idx-1];
        e.pb(ed);
    }
    for(i=0;i<=n;i++)
    parent[i] = i;
    int mo = e.size();
    sort(e.begin(),e.end());
    int ans = 0;
    for(i=0;i<mo;i++)
    {
        int u = e[i].u;
        int v = e[i].v;
        int w = e[i].w;
        if(getParent(u)==getParent(v))
        continue;
        unionFind(u,v);
        ans += w;
    }
    cout<<ans<<endl;
    return 0;
}