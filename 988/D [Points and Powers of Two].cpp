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
int n;
vector<int> v;
int BinSearch(int x)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high+1)/2;
        if(v[mid]>x)
            high=mid-1;
        else if(v[mid]<x)
            low=mid+1;
        else
            return mid;
    }
    return -1;
}
int32_t main()
{
    IOS;
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    int k=0,a=0,b=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<31;j++)
        {
            if(BinSearch(v[i]+pow(2,j))!=-1&&BinSearch(v[i]+pow(2,j+1))!=-1)
            {
                cout<<3<<endl;
                cout<<v[i]<<" "<<v[i]+(int)pow(2,j)<<" "<<v[i]+(int)pow(2,j+1)<<endl;
                return 0;
            }
            else if(k==0)
            {
                if(BinSearch(v[i]+pow(2,j))!=-1)
                {
                    k=1;
                    a=v[i];
                    b=v[i]+pow(2,j);
                }
                if(BinSearch(v[i]+pow(2,j+1))!=-1)
                {
                    k=1;
                    a=v[i];
                    b=v[i]+pow(2,j+1);
                }
            }
        }
    }
    if(k)
    {
        cout<<2<<endl;
        cout<<a<<" "<<b<<endl;
    }
    else
    {
        cout<<1<<endl;
        cout<<v[0];
    }
    return 0;
}