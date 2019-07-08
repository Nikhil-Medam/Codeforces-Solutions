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
int n,m,w,x,y,z,p,vis[50];
vector<int> v[50],v1[50],v2,v3;
void dfs(int x)
{
	vis[x]=1;
	v2.push_back(x);
	for(int i=0;i<v[x].size();i++)
		if(!vis[v[x][i]])
			dfs(v[x][i]);
}
int32_t main()
{
    IOS;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
    	cin>>x>>y;
    	v[x].push_back(y);
    	v[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
    {
    	if(!vis[i])
    	{
    		dfs(i);
    		for(int j=0;j<v2.size();j++)
    			v1[p].push_back(v2[j]);
    		p++;
    		v2.clear();
    	}
    }
    x=0,y=0;
    for(int i=0;i<p;i++)
    {
    	if(v1[i].size()==1)
    		x++;
    	if(v1[i].size()==2)
    		y++;
    	if(v1[i].size()==3)
    		z++;
    	if(v1[i].size()>3)
    		w=1;
    }
    if(x<y||(x-y)%3!=0||w)
    {
    	cout<<-1;
    	return 0;
    }
    for(int i=0;i<p;i++)
    	if(v1[i].size()==1)
    		v3.push_back(v1[i][0]);
    x=0;
    for(int i=0;i<p;i++)
    {
    	int k=v1[i].size();
    	if(k>=2)
    	{
    		for(int j=0;j<k;j++)
    			cout<<v1[i][j]<<" ";
    		for(int j=0;j<3-k;j++)
    			cout<<v3[x++]<<" ";
    		cout<<endl;
    	}
    }
    int cnt=0;
    for(int i=x;i<v3.size();i++)
    {
    	cout<<v3[i]<<" ";
    	cnt++;
    	if(cnt%3==0)
    		cout<<endl;
    }	
    return 0;
}