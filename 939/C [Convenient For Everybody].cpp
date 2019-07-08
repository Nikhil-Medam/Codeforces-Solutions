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
    int n;
    cin>>n;
    int a[n],b[2*n+1];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    int s,f,d;
    cin>>s>>f;
    d=f-s;
    b[0]=0;
    for(int i=1;i<=n;i++)
    	b[i]=b[i-1]+a[i-1];
    for(int i=n+1;i<=2*n;i++)
    	b[i]=b[i-1]+a[i-n-1];
    int ans=0,ind=-1;
    for(int i=d;i<2*n;i++)
    	if(b[i]-b[i-d]>=ans)
    	{	
    		ans=b[i]-b[i-d];
    		if(i<=n)
    			ind=i;
    		else
    			ind=i%n;
    	}
    vector<int> v,v1;		
    for(int i=d;i<2*n;i++)
    	if(b[i]-b[i-d]==ans)
    	{
    		if(i<=n)
    			v.push_back(i);
    		else
    			v.push_back(i%n);
    	}		
    for(int i=0;i<v.size();i++)
    {
    	v1.push_back((1000*n+f-v[i])%n);
    	if(v1[i]==0)
    		v1[i]=n;
    }
    sort(v1.begin(),v1.end());
    cout<<v1[0];	
    return 0;
}