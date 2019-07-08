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
ll fact(ll n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    if(n>=2)
        return n*fact(n-1);
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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int b[n],c[n],d[n],e[n];
    b[0]=0;
    c[n-1]=0;
    for(int i=1;i<n;i++)
        if(a[i]>a[i-1]+b[i-1])
            b[i]=0;
        else
            b[i]=a[i-1]+b[i-1]+1-a[i];
    for(int i=n-2;i>=0;i--)
        if(a[i]>a[i+1]+c[i+1])
            c[i]=0;
        else
            c[i]=a[i+1]+c[i+1]+1-a[i];
    for(int i=0;i<n;i++)
        d[i]=b[i];
    for(int i=0;i<n;i++)
        e[i]=c[i];    
    for(int i=1;i<n;i++)
        b[i]=b[i-1]+b[i];
    for(int i=n-2;i>=0;i--)
        c[i]=c[i+1]+c[i];
    int min=c[0];
    if(b[n-1]<min)
        min=b[n-1];
    for(int i=0;i<n-1;i++)
    {
        int z=0;
        if(a[i]+d[i]==a[i+1]+e[i+1])
            z=1;
        if(b[i]+c[i+1]+z<min)
            min=b[i]+c[i+1]+z;
    }        
    cout<<min;        
    return 0;
}