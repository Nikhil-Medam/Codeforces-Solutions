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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[3]={0};
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R')
            a[0]++;
        if(s[i]=='G')
            a[1]++;
        if(s[i]=='B')
            a[2]++;    
    }
    char R='R',G='G',B='B';
    int k=0;
    for(int i=0;i<3;i++)
        if(a[i]==0)
            k++;
    if(k==2)
    {
        if(a[0]>0)
            cout<<R;
        if(a[1]>0)
            cout<<G;
        if(a[2]>0)
            cout<<B;    
    }
    else 
    {
        if(k==0)
            cout<<B<<G<<R;
        else
        {
            if(a[0]==0)
            {
                if(a[1]==1&&a[2]==1)
                    cout<<R;
                else if(a[1]==1)
                    cout<<G<<R;
                else if(a[2]==1)
                    cout<<B<<R;
                else
                    cout<<B<<G<<R;
                    
            }
            else if(a[1]==0)
            {
                if(a[0]==1&&a[2]==1)
                    cout<<G;
                else if(a[0]==1)
                    cout<<G<<R;
                else if(a[2]==1)
                    cout<<B<<G;
                else
                    cout<<B<<G<<R;
                    
            }
            else if(a[2]==0)
            {
                if(a[0]==1&&a[1]==1)
                    cout<<B;
                else if(a[0]==1)
                    cout<<B<<R;
                else if(a[1]==1)
                    cout<<B<<G;
                else
                    cout<<B<<G<<R;
                    
            }
        }
    }
    return 0;
}