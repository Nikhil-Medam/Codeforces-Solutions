#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
const int N=1e6+5;
ll max(ll a,ll b)
{
    if(a>=b)
        return a;
    else
        return b;
}
ll min(ll a,ll b)
{
    if(a>=b)
        return b;
    else
        return a;
}
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
void pairsort(double a[], double b[], ll n)
{
    pair<double, double> pairt[n];
 

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
ll rev(ll n)
{
    ll ans=0;
    while(n)
    {
        ans=ans*10+n%10;
        n=n/10;
    }
    return ans;
}
int isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;        
}
long long C(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
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
        {
            res = res * x;
        }
        p >>= 1;
        x = x*x % mod;
        res %= mod;
    }
    return res;
}
int n;
vector<int> v;
int BinSearch(int x)
{
    int low=0,high=n-1,mid,mid1=0;
    while(low<=high)
    {
        mid=(low+high+1)/2;
        if(v[mid]>x)
            high=mid-1;
        else
        {
            if(mid>mid1)
                mid1=mid;
            low=mid+1;    
        }
    }
    return mid1;
}
int32_t main()
{
    IOS;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<n;i++)
        ans=max(ans,BinSearch(2*v[i])-i+1);
    cout<<n-ans;    
    return 0;
}