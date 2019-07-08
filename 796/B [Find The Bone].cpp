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
int32_t main()
{
    IOS;
    int n,m,k;
    cin>>n>>m>>k;
    int a[m],b[n+1]={0};
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }    
    int p=1;
    for(int i=0;i<k;i++)
    {
        int x,y,k1=0;
        cin>>x>>y;
        if(b[p]==1)
            break;
        if(x==p)
        {
            p=y;
            if(b[p]==1)
                break;
        }
        else if(y==p)
        {
             p=x;
            if(b[p]==1)
                break;
        }
    }
    cout<<p;
    return 0;
}