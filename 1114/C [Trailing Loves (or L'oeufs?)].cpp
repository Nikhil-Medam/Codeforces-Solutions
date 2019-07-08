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
int32_t main()
{
    IOS;
    int n,b;
    cin>>n>>b;
    int t=b;
    vector<int> v;
    map<int,int> m,M;
    for(int i=2;i<=sqrt(t);i++)
    	if(t%i==0)
    	{
    		if(m[i]==0)
    			v.push_back(i);
    		m[i]++;
    		t/=i;
    		i--;
    	}
    if(t!=1)
    {
    	v.push_back(t);
    	m[t]++;
    	t=1;
    }
    for(int i=0;i<v.size();i++)
    {
    	int x=n,p=1,ans=0;
    	while(x>=pow(v[i],p))
    	{
    		ans+=x/pow(v[i],p);
    		p++;
    	}
    	M[v[i]]=ans;
    }	
    int mi=-1;
    for(int i=0;i<v.size();i++)
    {
    	if(i==0)
    	{
    		mi=M[v[i]]/m[v[i]];
    	}
    	else
    		mi=min(mi,M[v[i]]/m[v[i]]);
    }
    cout<<mi;
    return 0;
}