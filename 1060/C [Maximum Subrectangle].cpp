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
ll mod(ll a)
{
    if(a>=0)
        return a;
    else
        return -a;
}
void pairsort(ll a[], ll b[], ll n)
{
    pair<ll, ll> pairt[n];
 

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
int32_t main()
{
    IOS;
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    int x;
    cin>>x;
    int c[n+1]={0},d[m+1]={0};
    for(int i=0;i<n;i++)
        c[i+1]=c[i]+a[i];
    for(int i=0;i<m;i++)
        d[i+1]=d[i]+b[i];
    int e[n+1],f[m+1];   
    for(int i=1;i<=n;i++)    
    {
        int min=99999999999999999;
        for(int j=0;i+j<n;j++)
        {
            if(c[i+j+1]-c[j]<min)
                min=c[i+j+1]-c[j];
        }
        e[i]=min;
    }
    for(int i=1;i<=m;i++)    
    {
        int min=99999999999999999;
        for(int j=0;i+j<m;j++)
        {
            if(d[i+j+1]-d[j]<min)
                min=d[i+j+1]-d[j];
        }
        f[i]=min;
    }
    int ar=0,max=0;

    int min=a[0];
    for(int i=0;i<n;i++)
        if(a[i]<min)
            min=a[i];
    e[0]=min;
    min=b[0];
    for(int i=0;i<m;i++)
        if(b[i]<min)
            min=b[i];
    f[0]=min; 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((i+1)*(j+1)>=ar&&e[i]*f[j]<=x)
                ar=(i+1)*(j+1);
        }
    }
    cout<<ar;
}