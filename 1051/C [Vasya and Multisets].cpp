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
    int n,d=0;
    cin>>n;
    int a[n];
    map<int,int> M;
    vector<int> v,v1,v2;
    for(int i=0;i<n;i++)
    	cin>>a[i],M[a[i]]++;
    for(int i=0;i<n;i++)
    	if(M[a[i]]==1)	
    		v.push_back(i);	
    d=v.size();
    if(d%2)
    {
    	int k=-1;
    	for(int i=0;i<n;i++)
    		if(M[a[i]]>2)
    			k=i;
    	if(k==-1)
    	{
    		cout<<"NO";
    		return 0;
    	}
    	cout<<"YES"<<endl;
    	set<int> s;
    	for(int i=0;i<(v.size())/2;i++)	
    		s.insert(v[i]);
    	for(int i=0;i<n;i++)
    	{
    		if(i==k||s.count(i))
    			cout<<"B";
    		else
    			cout<<"A";
    	}
    	return 0;
    }
	cout<<"YES"<<endl;
    set<int> s;
    for(int i=0;i<(v.size())/2;i++)
    	s.insert(v[i]);
    for(int i=0;i<n;i++)
    {
    	if(s.count(i))
    		cout<<"B";
    	else
    		cout<<"A";
    }
    return 0;
}