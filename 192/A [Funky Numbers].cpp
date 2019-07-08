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
int a[100000];
int BinSearch(int x)
{
    int low=0,high=99999,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]<x)
            low=mid+1;
        else if(a[mid]>x)
            high=mid-1;
        else
            return mid;
    }
    return -1;
}
int32_t main()
{
    IOS;
    for(int i=0;i<100000;i++)
        a[i]=(i)*(i+1)/2;
    int n;
    cin>>n;
    a[0]=1;
    for(int i=0;i<100000;i++) 
    {
        if(a[i]<n)
        {
            if(BinSearch(n-a[i])!=-1)
            {
                cout<<"YES";
                return 0;
            }
        }
        else
            break;
    }        
    cout<<"NO";    
    return 0;
}