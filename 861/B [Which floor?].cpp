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
int Cnst(char c)
{
    if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!=' ')
        return 1;
    return 0;    
}
int32_t main()
{
    IOS;
    int n,m;
    cin>>n>>m;
    int a[101]={0};
    for(int i=0;i<m;i++)
    {
        int p,q;
        cin>>p>>q;
        for(int i=1;i<101;i++)
        {
            if(q*i>=p&&p>(q-1)*i)
                a[i]++;
            if(p<=(q-1)*i)
                break;
        }
    }
    int ind,m1=0,b[101],k1=0;
    for(int i=0;i<101;i++)
        if(a[i]==m)
            b[k1++]=i;
    int k2=0;
    for(int i=0;i<k1;i++)
        b[i]=ceil((double)n/(b[i]));
    for(int i=0;i<k1-1;i++)
        if(b[i]!=b[i+1])
            k2=1;
    if(n==1)
        cout<<1;
    else if(k2==1)
        cout<<-1;
    else
        cout<<b[0];
    return 0;
}