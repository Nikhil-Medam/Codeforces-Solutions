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
void pairsort(double a[], double b[], ll n)
{
    pair<double, double> pairt[n];
 

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
long long C(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

ll mod = 1e9+7;
ll modexpo(ll x,ll p)
{
    ll res = 1;
    x = x%mod;
    while(p)
    {
        if(p%2)
        {
            res = res * x;
        }
        p >>= 1;
        x = x*x % mod;
        res %= mod;
    }
    return res;
}
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int y=n;
    vector<int> v1;
    while(n)
    {
        v1.push_back(n%10);
        n/=10;
    }
    n=y;
    int p=v1.size();
    int a[p];
    for(int i=v1.size()-1;i>=0;i--)
        a[p-i-1]=v1[i];
    if(v1.size()%2)
    {
        int m=v1.size()+1;
        for(int i=0;i<m/2;i++)
            cout<<4;
        for(int i=0;i<m/2;i++)
            cout<<7;    
    }
    else
    {
        int k=0;
        int x=1;
        int b[p];
        for(int i=0;i<p/2;i++)
            b[i]=4;
        for(int i=0;i<p/2;i++)
            b[i+p/2]=7;    
        while(x)
        {
            x=0;
            int z=0;
            for(int i=0;i<p;i++)
                z=z*10+b[i];
            if(z>=n)
            {
                cout<<z;
                k=1;
                break;
            }
            next_permutation(b,b+p);
            int c[p];
            for(int i=0;i<p/2;i++)
                c[i]=4;
            for(int i=0;i<p/2;i++)
                c[i+p/2]=7;   
            for(int i=0;i<p;i++)
                if(b[i]!=c[i])
                    x=1;
        }
        if(k==0)
        {
            for(int i=0;i<p/2+1;i++)
                cout<<4;
            for(int i=0;i<p/2+1;i++)
                cout<<7;
        }
    }
    return 0;
}