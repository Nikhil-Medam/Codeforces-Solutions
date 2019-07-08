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
int32_t main()
{
    IOS;
    string s;
    cin>>s;
    int s1=0,s2=0;
    for(int i=0;i<3;i++)
        s1=s1+(int)s[i]-48;
    for(int i=3;i<6;i++)
        s2=s2+(int)s[i]-48;
    if(s1==s2)
        cout<<0;
    else if(s1>s2)
    {
        int a[6];
        for(int i=0;i<3;i++)
            a[i]=diff(0,s[i]-48);
        for(int i=3;i<6;i++)
            a[i]=diff(9,s[i]-48); 
        sort(a,a+6);
        int k=0,d=s1-s2;
        for(int i=5;i>=0;i--)
        {
            if(d>a[i])
            {
                k++;
                d=d-a[i];
            }
            else
            {
                k++;
                break;
            }
        }
        if(k>=4)
            k=3;
        cout<<k<<endl;
    }
    else
    {
        int a[6];
        for(int i=0;i<3;i++)
            a[i]=diff(9,s[i]-48);
        for(int i=3;i<6;i++)
            a[i]=diff(0,s[i]-48); 
        sort(a,a+6);
        int k=0,d=s2-s1;
        for(int i=5;i>=0;i--)
        {
            if(d>a[i])
            {
                k++;
                d=d-a[i];
            }
            else
            {
                k++;
                break;
            }
        }
        if(k>=4)
            k=3;
        cout<<k<<endl;
    }
    return 0;
}