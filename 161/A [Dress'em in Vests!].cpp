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
int isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
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
vector<pair<int,int>> a;
vector<int> b;
int n,m,x,y,l=0;
int BinSearch(int x)
{
    int low=l,high=a.size()-1,mid,mid1=99999999999;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid].first>=x)
        {
            high=mid-1;
            if(mid<mid1)
                mid1=mid;
        }
        else if(a[mid].first<x)
        {
            low=mid+1;    
        }
    }
    return mid1;
}
int32_t main()
{
    IOS;
    cin>>n>>m>>x>>y;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        a.push_back(make_pair(p,i));
    }    
    for(int i=0;i<m;i++)
    {
        int p;
        cin>>p;
        b.push_back(p);
    }
    vector<int> v1,v2;
    int s=a.size()-1;
    for(int i=0;i<m;i++)
    {
        int k=BinSearch(b[i]-y);
        if(k<=s&&a[k].first<=b[i]+x)
        {
            v1.push_back(a[k].second+1);
            v2.push_back(i+1);
            l=k+1;
            a[k].first=-1;
        }
    }
    /*for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;*/    
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" "<<v2[i]<<endl;
    return 0;
}