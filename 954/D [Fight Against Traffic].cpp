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
vector<int> v1,v2,v[1005],h,q;
int n,m,s,t,ans,vis[1005],H1[1005],H2[1005],A[1005][1005];
void bfs(int x)
{
	vis[x]=1;
	q.push_back(x);
	h.push_back(0);
	for(int i=0;i<q.size();i++)
		for(int j=0;j<v[q[i]].size();j++)
			if(!vis[v[q[i]][j]])
			{
				q.push_back(v[q[i]][j]);
				h.push_back(h[i]+1);
				vis[v[q[i]][j]]=1;
			}
}
int32_t main()
{
    IOS;
    cin>>n>>m>>s>>t;
    for(int i=0;i<m;i++)
    {
    	int p,q;
    	cin>>p>>q;
    	v[p].push_back(q);
    	v[q].push_back(p);
    	A[p][q]=1;
    	A[q][p]=1;
    }
    bfs(s);
    for(int i=0;i<h.size();i++)
    	H1[q[i]]=h[i];
    memset(vis,0,sizeof(vis));
    q.clear();
    h.clear();
    bfs(t);
    for(int i=0;i<h.size();i++)
    	H2[q[i]]=h[i];
    int D=H1[t];
    for(int i=1;i<=n;i++)
    {
    	for(int j=i+1;j<=n;j++)
    	{
    		if(!A[i][j]&&H1[i]+H2[j]+1>=D&&H1[j]+H2[i]+1>=D)
    			ans++;
    	}
    }
    cout<<ans;
    return 0;
}