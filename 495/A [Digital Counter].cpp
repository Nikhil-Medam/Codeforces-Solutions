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
    int ans=0;
    int k=n%10;
    if(k==0)
        ans=2;
    if(k==1)
        ans=7;
    if(k==2)
        ans=2;
    if(k==3)
        ans=3;
    if(k==4)
        ans=3;
    if(k==5)
        ans=4;
     if(k==6)
        ans=2;
    if(k==7)
        ans=5;
    if(k==8)
        ans=1;
    if(k==9)
        ans=2;   
    k=n/10; 
    int ans1=ans;
    if(k==0)
        ans=2;
    if(k==1)
        ans=7;
    if(k==2)
        ans=2;
    if(k==3)
        ans=3;
    if(k==4)
        ans=3;
    if(k==5)
        ans=4;
     if(k==6)
        ans=2;
    if(k==7)
        ans=5;
    if(k==8)
        ans=1;
    if(k==9)
        ans=2; 
    cout<<ans1*ans;
    return 0;
}