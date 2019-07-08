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
double dist(double x1,double y1,double x2,double y2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int getPrimeFactors(int x)
{
    int cnt=0;
    map<int,int> m;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
        {
            if(m[i]==0)
                cnt++,m[i]=1;
            x/=i;
            i--;
        }
    if(x!=1)
        cnt++;
    return cnt;    
}
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int a[n],cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            cnt++;
    }
    if(cnt)
    {
        cout<<n-cnt;
        return 0;
    }
    int g=a[0];
    for(int i=1;i<n;i++)
        g=gcd(a[i],g);
    if(g>1)
    {
        cout<<-1;
        return 0;
    }
    int m=n;
    for(int i=0;i<n;i++)
    {
        int g1=a[i],ind=-1;
        for(int j=i+1;j<n;j++)
        {
            g1=gcd(g1,a[j]);
            if(g1==1)
            {
                ind=j-i;
                break;
            }
        }
        if(ind!=-1)
            m=min(m,ind);
    }
    cout<<m+n-1;    
    return 0;
}