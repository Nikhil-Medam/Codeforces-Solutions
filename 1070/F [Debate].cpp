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
void pairsort(string a[], ll b[], ll n)
{
    pair<string, ll> pairt[n];
 

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
    string s[n];
    int a[n];
    for(int i=0;i<n;i++)
        cin>>s[i]>>a[i];
    pairsort(s,a,n);
    int zz=0,zo=0,oz=0,oo=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=="00")
            zz++;
        if(s[i]=="01")
            zo++;
        if(s[i]=="10")
            oz++;
        if(s[i]=="11")
            oo++;
    }
    int ans=0;
    for(int i=0;i<n;i++)    
        if(s[i]=="11")
            ans=ans+a[i];
    if(zo<=oz)
    {
        int k1=zo,k2=zo;
        for(int i=n-1;i>=0;i--)
        {
            if(k1>0&&s[i]=="10")
            {
                ans=ans+a[i];
                a[i]=-1;
                k1--;
            }
            if(k2>0&&s[i]=="01")
            {
                ans=ans+a[i];
                a[i]=-1;
                k2--;
            }
        }
        int b[n];
        int k=0;
        for(int i=0;i<n;i++)
            if((s[i]=="10"||s[i]=="00")&&a[i]>0)
                b[k++]=a[i];
        sort(b,b+k,greater<int>());
        for(int i=0;i<min(oo,k);i++)
            ans=ans+b[i];
    }
    else
    {
        int k1=oz,k2=oz;
        for(int i=n-1;i>=0;i--)
        {
            if(k1>0&&s[i]=="10")
            {
                ans=ans+a[i];
                a[i]=-1;
                k1--;
            }
            if(k2>0&&s[i]=="01")
            {
                ans=ans+a[i];
                a[i]=-1;
                k2--;
            }
        }
        int b[n];
        int k=0;
        for(int i=0;i<n;i++)
            if((s[i]=="01"||s[i]=="00")&&a[i]>0)
                b[k++]=a[i];
        sort(b,b+k,greater<int>());
        for(int i=0;i<min(oo,k);i++)
            ans=ans+b[i];
    }
    cout<<ans;
    return 0;
}