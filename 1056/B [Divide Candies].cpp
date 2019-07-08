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
    int n,m;
    cin>>n>>m;
    if(n<m)
    {
        int a[n];
        for(int i=0;i<n;i++)
        {
            a[i]=(i+1)*(i+1);
        }
        int ans=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                if((a[i]+a[j])%m==0)
                    ans++;
            }
        cout<<ans<<endl;    
    }
    else
    {
        int a[m];
        for(int i=0;i<m;i++)
        {
            a[i]=(i+1)*(i+1);
        }
        int ans=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<m;j++)
            {
                if((a[i]+a[j])%m==0)
                    ans++;
            }
        ans*=n/m;     
        ans*=n/m;   
        int p=0;
        for(int i=0;i<n%m;i++)
            for(int j=0;j<m;j++)
            {
                if((a[i]+a[j])%m==0)
                {
                    p++;
                    p++;
                }    
            }
        ans+=p*(n/m);    
        for(int i=0;i<n%m;i++)
            for(int j=0;j<n%m;j++)
            {
                if((a[i]+a[j])%m==0)
                    ans++;
            }
        cout<<ans<<endl;    
    }
    return 0;
}