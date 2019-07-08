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
    int n,m,M=0;
    cin>>n>>m;
    int a[n],b[m],c[m];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    for(int i=0;i<m;i++)
    	cin>>b[i]>>c[i];
    vector<int> v;
    for(int i=0;i<n;i++)
    {
    	for(int j=i+1;j<n;j++)
    	{
    		int ind1=i,ind2=j,p=0,m1;
    		vector<int> v1;
    		for(int k=0;k<m;k++)
    			if(ind1+1>=b[k]&&ind1+1<=c[k]&&!(ind2+1>=b[k]&&ind2+1<=c[k]))
    			{
    				p++;
    				v1.push_back(k+1);
    			}
    		m1=a[ind2]-a[ind1]+p;
    		if(m1>M)
    		{
    			M=m1;
    			v.clear();
    			for(int l=0;l<v1.size();l++)
    				v.push_back(v1[l]);
    		}
    		p=0;
    		ind1=j;
    		ind2=i;
    		v1.clear();
    		for(int k=0;k<m;k++)
    			if(ind1+1>=b[k]&&ind1+1<=c[k]&&!(ind2+1>=b[k]&&ind2+1<=c[k]))
    			{
    				p++;
    				v1.push_back(k+1);
    			}
    		m1=a[ind2]-a[ind1]+p;
    		if(m1>M)
    		{
    			M=m1;
    			v.clear();
    			for(int l=0;l<v1.size();l++)
    				v.push_back(v1[l]);
    		}
    		v1.clear();
    	}
    }
    cout<<M<<endl;
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    	cout<<v[i]<<" ";
    return 0;
}