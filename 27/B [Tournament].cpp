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
int solve(int n,int m)
{   
        
}

int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int m=n*(n-1)/2-1;
    int a[n+1]={0},b[n+1]={0};
    for(int i=0;i<m;i++)
    {
        int p,q;
        cin>>p>>q;
        a[p]++;
        b[q]++;
    }
    int ind1=-1,ind2=-1;
    for(int i=1;i<n+1;i++)
    {
        if((a[i]+b[i])!=n-1&&ind1==-1)
            ind1=i;
        else if((a[i]+b[i])!=n-1)
            ind2=i;
    }
    if(a[ind1]>=a[ind2])
        cout<<ind1<<" "<<ind2;
    else
        cout<<ind2<<" "<<ind1;
    return 0;
}
