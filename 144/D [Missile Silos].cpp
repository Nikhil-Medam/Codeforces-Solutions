#include<bits/stdc++.h>
#pragma GCC optimize ("-O3")
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
#define double long double
#define pb push_back
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define diff(a,b) (a>b?a-b:b-a)
const int N=1e5+5;
void pairsort(int a[], int b[], int n){
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
int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
int isPrime(int n){
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
    if(r>n-r) 
        r=n-r;
    long long ans=1;
    for(int i=1;i<=r;i++){
        ans*=n-r+i;
        ans/=i;
    }
    return ans;
}
int mod = 1e9+7;
int modexpo(int x,int p){
    int res = 1;
    x = x%mod;
    while(p){
        if(p%2)
            res = res * x;
        p >>= 1;
        x = x*x % mod;
        res %= mod;
    }
    return res;
}
int n,m,sr,x,y,w,d[N],vis[N],ans,l,a[N],b[N],c[N];
vector<pair<int,int>> v[N];
multiset<pair<int,int>> s;
int32_t main()
{
    IOS;
    cin>>n>>m>>sr;
    for(int i=1;i<=n;i++)
        d[i]=1e18;
    for(int i=1;i<=m;i++)
        cin>>x>>y>>w,v[x].push_back({w,y}),v[y].push_back({w,x}),a[i]=x,b[i]=y,c[i]=w;
    d[sr]=0,s.insert({0,sr});
    while(!s.empty())
    {
        pair<int,int> p=*s.begin();
        s.erase(s.begin());
        x=p.second,w=p.first;
        if(vis[x])
            continue;
        vis[x]=1;
        for(int i=0;i<v[x].size();i++)
            if(!vis[v[x][i].second]&&d[v[x][i].second]>d[x]+v[x][i].first)
                d[v[x][i].second]=d[x]+v[x][i].first,s.insert({d[v[x][i].second],v[x][i].second});
    }
    cin>>l;
    for(int i=1;i<=n;i++)
        if(d[i]==l)
            ans++;
    for(int i=1;i<=m;i++)
    {
        if(d[a[i]]<l&&d[a[i]]+c[i]>l&&d[b[i]]+c[i]-(l-d[a[i]])>l)
            ans++;
        if(d[b[i]]<l&&d[b[i]]+c[i]>l&&d[a[i]]+c[i]-(l-d[b[i]])>l)
            ans++;
        if(d[a[i]]<l&&d[b[i]]<l&&d[a[i]]+d[b[i]]+c[i]==2*l)
            ans++;
    }
    cout<<ans;
    return 0;
}