#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
#define pb push_back
const int N=1e6+5;
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
void pairsort(int a[], int b[], ll n)
{
    pair<int, int> pairt[n];
 

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
    return __gcd(a,b); 
}
int isPrime(int n)
{
    if(n < 2)
        return 0;
    if(n < 4)
        return 1;
    if(n % 2 == 0 or n % 3 == 0)
        return 0;
    for(int i = 5; i*i <= n; i += 6)
        if(n % i == 0 or n % (i+2) == 0)
            return 0;
    return 1;
}
long long C(int n, int r) {
    if(r > n - r) r = n - r;
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
ll mod = 1e9+7;
const int M = 2e5+3;
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
    vector <int> v[M];
    int i = 0,a,b;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v[i+1].pb(a);
        v[i+1].pb(b);
    }
    if(n==3)
    {
        cout<<"1 2 3";
        return 0;
    }
    int point[M];
    for(i=1;i<=n;i++)
    {
        int ax = v[i][0];
        int bx = v[i][1];
        if(v[ax][0]==bx||v[ax][1]==bx)
        point[i]=ax;
        else
        point[i]=bx;
    }
    cout<<1<<" ";
    i = 1;
    n--;
    while(n--)
    {
        cout<<point[i]<<" ";
        i = point[i];
    }
    return 0;
}