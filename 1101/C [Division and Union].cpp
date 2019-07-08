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
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	map<int,int> m;
    	cin>>n;
    	vector<tuple<int,int,int>> v;
    	for(int i=0;i<n;i++)
    	{
    		int l,r;
    		cin>>l>>r;
    		v.push_back(make_tuple(l,r,i));
    	}
    	sort(v.begin(),v.end());
    	int M=get<1>(v[0]),x=0;
    	m[get<2>(v[0])]=1;
    	for(int i=1;i<n;i++)
    	{
    		if(get<0>(v[i])>M)
    			break;
    		m[get<2>(v[i])]=1;
    		M=max(M,get<1>(v[i]));
    		x++;
    	}
    	if(x==n-1)
    	{
    		cout<<-1<<endl;
    		continue;
    	}
    	for(int i=0;i<n;i++)
    		cout<<m[i]+1<<" ";
    	cout<<endl;	
    }
    return 0;
}