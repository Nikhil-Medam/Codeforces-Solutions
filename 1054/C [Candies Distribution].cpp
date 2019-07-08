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
    int k=1;
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    int c[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)    
            c[i][j]=0;
    for(int i=0;i<n;i++)
    {
        int p=a[i]+b[i];
        for(int j=0;j<p;j++)
            c[i][j]=1;
    }
    for(int i=0;i<n;i++)
    {
        int t=0;
        for(int j=0;j<n;j++)
        {
            if(c[j][i]==0)
                t++;
        }
        if(t<i+1)
            k=0;
    } 
    for(int i=0;i<n;i++)
    {
        int t=0;
        for(int j=0;j<n;j++)
            if(c[i][j]==0)
                t=1;
        if(t==0)
            k=0;
    }
    int d[n];
    for(int i=0;i<n;i++)
        d[i]=n-a[i]-b[i];
    if(k)
    {
        int A[n]={0},B[n]={0};
        for(int i=0;i<n;i++)
            for(int j=0;j<i;j++)
                if(d[i]<d[j])
                    A[i]++;
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                if(d[i]<d[j])
                    B[i]++; 
        for(int i=0;i<n;i++)
            if(a[i]!=A[i])
                k=0;
        for(int i=0;i<n;i++)
            if(b[i]!=B[i])
                k=0;        
    }
    if(k) 
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
            cout<<n-a[i]-b[i]<<" ";
    }
    else
        cout<<"NO";
    return 0;
}