#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
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
int n,a[100005],m,vis[100005],cost,ways=1;
vector<int> v[100005],V[100005],v1;
stack<int> st;
void dfs(int x)
{
	vis[x]=1;
	for(int i=0;i<v[x].size();i++)
		if(!vis[v[x][i]])
			dfs(v[x][i]);
	st.push(x);
}
void dfs1(int x)
{
	vis[x]=1;
	v1.push_back(x);
	for(int i=0;i<V[x].size();i++)
		if(!vis[V[x][i]])
			dfs1(V[x][i]);
}
int32_t main()
{
    IOS;
    cin>>n;
    for(int i=1;i<=n;i++)
    	cin>>a[i];
    cin>>m;
    for(int i=0;i<m;i++)
    {
    	int p,q;
    	cin>>p>>q;
    	v[p].push_back(q);
    	V[q].push_back(p);
    }
    for(int i=1;i<=n;i++)
    	if(!vis[i])
    		dfs(i);
    memset(vis,0,sizeof(vis));
    while(st.size())
    {
    	int x=st.top(),p=0;
    	if(!vis[x])
    	{
    		dfs1(x);
    		vector<int> v2;
    		for(int j=0;j<v1.size();j++)
    			v2.push_back(a[v1[j]]);
    		sort(v2.begin(),v2.end());
    		for(int j=0;j<v2.size();j++)
    		{
    			if(v2[j]==v2[0])
    				p++;
    			else
    				break;
    		}
    		cost+=v2[0];
    		ways*=p;
    		ways%=mod;
    	}	
    	v1.clear();
    	st.pop();
    }
    cout<<cost<<" "<<ways;
    return 0;
}