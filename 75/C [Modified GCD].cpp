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
int a,b;
int q;
vector<int> v;
int BinSearch(int x,int y)
{
    int mid1=-1,mid,low=0,high=v.size()-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(v[mid]<x)
            low=mid+1;
        else if(v[mid]>y)
            high=mid-1;
        else
        {
            low=mid+1;
            if(mid>mid1)
                mid1=mid;
        }
    }
    return mid1;
}
int32_t main()
{
    IOS;
    cin>>a>>b;
    cin>>q;
    int k=gcd(a,b);
    for(int i=1;i<=sqrt(k);i++)
        if(k%i==0)
        {
            v.push_back(i);
            v.push_back(k/i);
        }
    sort(v.begin(),v.end());    
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        int m=BinSearch(x,y);
        if(m!=-1)
            cout<<v[m]<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}