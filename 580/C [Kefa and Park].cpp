#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
#define pb push_back
const int N=1e5+5;
int max(int a,int b)
{
	if(a>=b)
		return a;
	else 	
		return b;
}
int min(int a,int b)
{
	if(a<=b)
		return a;
	else 	
		return b;
}
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
    if (b == 0)
        return a;
    return gcd(b, a % b); 
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
ll modexpo(ll x,ll p)
{
    ll res = 1;
    x = x%mod;
    while(p)
    {
        if(p%2)
            res = res * x;
        p >>= 1;
        x = x*x % mod;
        res %= mod;
    }
    return res;
}
vector<int> v[100005],v1(100005);
int n,m,mark[100005],vis[100005],a[100005],p=0,ans,S=0,b[100005];
stack<int> s;
void addEdge(int p,int q)
{
    v[p].push_back(q);
    v[q].push_back(p);
}
void dfs(int x)
{
	vis[x]=1;
	s.push(x);
	v1[S++]=a[x];
	int k=0,k1=0;
	for(int i=0;i<v[x].size();i++)
	{
		if(vis[v[x][i]]==0)
		{
			dfs(v[x][i]);
			k1=1;
		}
	}
	if(k1==0)
	{
		int p1=0;
		for(int i=0;i<S;i++)
		{
			if(v1[i])
				p1++;
			else
				p1=0;
			if(p1>m)
				k=1;
		}
		if(k==0)
			ans++;
	}
	S--;
	s.pop();
}
int32_t main()
{
    IOS;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
    	int p,q;
    	cin>>p>>q;
    	addEdge(p,q);
    } 
    dfs(1);
    cout<<ans; 
    return 0;
}