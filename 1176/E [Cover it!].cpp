#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define double long double
#define pb push_back
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define diff(a,b) (a>b?a-b:b-a)
const int N=2e5+5;
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
int t,n,m,vis[N],a[N],x,y;
vector<int> v[N];
void dfs(int x)
{
    vis[x]=1;
    for(int i=0;i<v[x].size();i++)
        if(!vis[v[x][i]])
            a[v[x][i]]=a[x]^1,dfs(v[x][i]);
}
int32_t main()
{
    IOS;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=m;i++)
        {
            cin>>x>>y;
            v[x].push_back(y),v[y].push_back(x);
        }
        dfs(1);
        vector<int> v1,v2;
        for(int i=1;i<=n;i++)
        {
            if(a[i])
                v1.push_back(i);
            else
                v2.push_back(i);
        }
        cout<<min(v1.size(),v2.size())<<endl;
        if(v1.size()<=v2.size())
            for(int i=0;i<v1.size();i++)
                cout<<v1[i]<<" ";
        else
            for(int i=0;i<v2.size();i++)
                cout<<v2[i]<<" ";
        cout<<endl;
        for(int i=1;i<=n;i++)
            v[i].clear(),vis[i]=a[i]=0;
    }
    return 0;
}