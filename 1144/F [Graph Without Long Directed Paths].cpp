#include<bits/stdc++.h>
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
int n,m,a[200005],b[200005],c[200005],vis[200005];
vector<int> v[200005],v1;
void bfs(int x)
{
	v1.push_back(x);
	vis[x]=1;
	for(int i=0;i<v1.size();i++)
		for(int j=0;j<v[v1[i]].size();j++)
			if(!vis[v[v1[i]][j]])
				v1.push_back(v[v1[i]][j]),c[v[v1[i]][j]]=c[v1[i]]^1,vis[v[v1[i]][j]]=1;
}
int32_t main()
{
    IOS;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
    	int p,q;
    	cin>>p>>q;
    	v[p].push_back(q);
    	v[q].push_back(p);
    	a[i]=p,b[i]=q;
    }
    bfs(1);
    for(int i=1;i<=m;i++)
    	if(c[a[i]]==c[b[i]])
    	{
    		cout<<"NO";
    		return 0;
    	}	
    cout<<"YES"<<endl;
    for(int i=1;i<=m;i++)
    	cout<<(c[a[i]]<c[b[i]]);	
    return 0;
}