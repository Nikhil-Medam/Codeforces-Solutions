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
    string s;
    cin>>s;
    int m=0;
    for(int i=0;i<n;i++)
        if(s[i]=='S')
            m++;
    if(m==0)
        cout<<n;
    else if(m==1)
        cout<<n-1;
    else
    {
        int a[m+1];
        int x=0,k=0,S=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='S')
            {
                a[k++]=x;
                x=0;
            }
            else
                x++;
        }
        a[k]=x;
        int ans=a[0]+a[1],ind;
        for(int i=0;i<m;i++)
        {
            if(a[i]+a[i+1]>=ans)
            {
                ans=a[i]+a[i+1];
                ind=i;
            }
        }
        int t=-1;
        for(int i=0;i<m+1;i++)
        {
            if(i!=ind&&i!=ind+1&&a[i]>0)
            {
                t=0;
            }
        }
        if(t<0)        
            cout<<ans;
        else
            cout<<ans+1;
    }
    return 0;
}