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
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int n1,n2;
    n1=s1.length();
    n2=s2.length();
    string s10="",s20="";
    int l=lcm(n1,n2);
    for(int i=0;i<l/n1;i++)
        s10=s10+s1;
    for(int i=0;i<l/n2;i++)
        s20=s20+s2;
    int cnt1=0,cnt2=0;
    for(int i=0;i<l;i++)
    {
        if(s10[i]==s20[i])
            continue;
        else if(s10[i]=='R'&&s20[i]=='S')
            cnt2++;
        else if(s10[i]=='P'&&s20[i]=='R')
            cnt2++;
        else if(s10[i]=='S'&&s20[i]=='P')
            cnt2++; 
        else if(s10[i]=='R'&&s20[i]=='P')
            cnt1++;
        else if(s10[i]=='P'&&s20[i]=='S')
            cnt1++;
        else if(s10[i]=='S'&&s20[i]=='R')
            cnt1++;    
    }
    cnt1*=n/l;
    cnt2*=n/l;
    for(int i=0;i<n%l;i++)
    {
        if(s10[i]==s20[i])
            continue;
        else if(s10[i]=='R'&&s20[i]=='S')
            cnt2++;
        else if(s10[i]=='P'&&s20[i]=='R')
            cnt2++;
        else if(s10[i]=='S'&&s20[i]=='P')
            cnt2++; 
        else if(s10[i]=='R'&&s20[i]=='P')
            cnt1++;
        else if(s10[i]=='P'&&s20[i]=='S')
            cnt1++;
        else if(s10[i]=='S'&&s20[i]=='R')
            cnt1++;  
    }
    cout<<cnt1<<" "<<cnt2;
    return 0;
}