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
void pairsort(double a[], double b[], ll n)
{
    pair<double, double> pairt[n];
 

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
vector<double> v[100005];
void addEdge(int p,int q)
{
    v[p].push_back(q);
    v[q].push_back(p);
}
stack<double> s;
int vis[100005];
double ans,sum,pro=1;
void dfs(int p)
{
    s.push(p);
    vis[p]=1;
    int t=0;
    int l=0;
    for(int i=0;i<v[p].size();i++)
    {
        if(vis[(int)v[p][i]]==0)
        {
           l++;
        }
    }
    if(l!=0)
        pro*=l;
    for(int i=0;i<v[p].size();i++)
    {
        if(vis[(int)v[p][i]]==0)
        {
            t++;
            sum++;
            dfs((int)v[p][i]);
        }
    }
    if(t==0)
        ans+=sum/pro;
    if(l!=0)    
        pro/=l;    
    sum--;    
    vis[p]=0;    
    s.pop();
}
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int a[100005]={0},b[100005]={0};
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x]++;
        b[y]++;
    }
    int p=0,q=0;
    for(int i=0;i<100005;i++)
    {
        if(a[i]!=0)
            p++;
        if(b[i]!=0)
            q++;
    }
    cout<<min(p,q);
    return 0;
}