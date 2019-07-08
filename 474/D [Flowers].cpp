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
    int d=1000000007;
    int t,k;
    cin>>t>>k;
    int a[100005]={0},b[100005]={0};
    for(int i=1;i<k;i++)
    {
        a[i]=1;
        b[i]=(b[i-1]+a[i])%d;
    }
    for(int i=k;i<100005;i++)
    {
        a[i]=(a[i-1]+a[i-k])%d;
        b[i]=(b[i-1]+a[i])%d;
    }
    if(k==1)
    {
        a[1]=1;
        for(int i=2;i<100005;i++)
            a[i]=(a[i-1]*2)%d;
        for(int i=1;i<100005;i++)
            b[i]=(b[i-1]+a[i])%d;
    }
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        if(b[y+1]-b[x]<0)
            cout<<b[y+1]-b[x]+d<<endl;
        else
            cout<<b[y+1]-b[x]<<endl;
    }
    return 0;
}