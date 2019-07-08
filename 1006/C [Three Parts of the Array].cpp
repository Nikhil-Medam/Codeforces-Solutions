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
vector<int> v,s1,s2;
int n;
int half;
int BinSearch(int x)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(s2[mid]<x)
        {
            low=mid+1;
        }
        else if(s2[mid]>x)
        {
            high=mid-1;
        }
        else
            return mid;
    }
    return -1;
}
int binarySearch(vector<int> arr, int l, int r, int x) 
{ 
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 
  
        // If the element is present at the middle  
        // itself 
        if (arr[mid] == x)   
            return mid; 
  
        // If element is smaller than mid, then  
        // it can only be present in left subarray 
        if (arr[mid] > x)  
            return binarySearch(v, l, mid-1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(v, mid+1, r, x); 
   } 
  
   // We reach here when element is not  
   // present in array 
   return -1;
}   
  
int32_t main()
{
    IOS;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);
        if(i==0)
            s1.push_back(v[i]);
        else
            s1.push_back(s1[i-1]+v[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
            s2.push_back(s1[n-1]);
        else
            s2.push_back(s2[i-1]-v[i-1]);
    }
    sort(s2.begin(),s2.end());
    half=s1[n-1]/2;
    for(int i=n-1;i>=0;i--)
    {
        if(s1[i]<=half)
        {
            int k=BinSearch(s1[i]);
            if(k!=-1)
            {
                cout<<s1[i];
                return 0;
            }
        }    
    }
    cout<<0;
    return 0;
}