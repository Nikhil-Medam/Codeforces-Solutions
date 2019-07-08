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
int n;
int BinSearch()
{
    int low=1,high=1e18,mid,mid1=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        //cout<<mid<<endl;
        if(mid>n)
            high=mid-1;
        else
        {
            int v=0,p=0;
            int temp=n;
            //temp=0;
            //temp-=temp/10;
            while(temp)
            {
                if(temp>mid)
                {
                    temp-=mid;
                    v+=mid;
                }
                else
                {
                    v+=temp;
                    temp=0;
                }
                p+=temp/10;
                if(temp==0)
                    break;
                temp-=temp/10;
            }
            if(v>p)
            {
                high=mid-1;
                if(mid1==-1)
                    mid1=mid;
                else if(mid<mid1)
                    mid1=mid;
            }
            else if(v<p)
                low=mid+1;
            else
                return mid;
        }
    }
    return mid1;
}
int32_t main()
{
    IOS;
    cin>>n;
    cout<<BinSearch();
    return 0;
}