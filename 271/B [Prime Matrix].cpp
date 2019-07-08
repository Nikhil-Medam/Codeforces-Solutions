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
int A[100005];
vector<int> v;
int BinSearch(int x)
{
    int low=0,high=v.size()-1,mid=0,mid1=999999999999;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(v[mid]>=x)
        {
            if(mid1==-1)
                mid1=mid;
            else if(mid<mid1)
                mid1=mid;
            high=mid-1;
        }    
        else if(v[mid]<x)
            low=mid+1;
    }
    return mid1;
}
int32_t main()
{
    IOS;
    for(int i=2;i<100005;i++)
        for(int j=2;i*j<100005;j++)
            A[i*j]=1;
    for(int i=2;i<100005;i++)
        if(A[i]==0)
            v.push_back(i);
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    int b[n+1][m+1]={0};
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            b[i][j]=v[BinSearch(a[i][j])]-a[i][j];
    for(int i=0;i<n;i++)
    {
        int s=0;
        for(int j=0;j<m;j++)
            s+=b[i][j];
        b[i][m]=s;    
    }
    for(int i=0;i<m;i++)
    {
        int s=0;
        for(int j=0;j<n;j++)
            s+=b[j][i];
        b[n][i]=s;    
    }
    int ans=999999999999;
    for(int i=0;i<n;i++)
        ans=min(ans,b[i][m]);
    for(int i=0;i<m;i++)
        ans=min(ans,b[n][i]);
    cout<<ans;    
    return 0;
}