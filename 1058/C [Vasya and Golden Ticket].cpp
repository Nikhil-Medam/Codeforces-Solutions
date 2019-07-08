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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=(int)s[i]-48;
    int sum=0,b[n];
    sum=a[0];
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        b[i]=b[i-1]+a[i];
        sum=sum+a[i];
    }
    int k1=0;
    for(int i=1;i<sum;i++)
    {
        if(sum%i==0)
        {
            int x=sum/i;
            int c[1000];
            for(int j=0;j<1000;j++)
                c[j]=-1;
            int k=1;    
            for(int j=0;j<n;j++)
                if(b[j]%i==0&&b[j]!=0)
                {
                    if(b[j]/i!=c[k-1])
                        c[k++]=b[j]/i;
                }  
            if(c[x]!=-1)
            {
                k1=1;
                break;
            }    
        }
    }
    int k2=1;
    for(int i=0;i<n;i++)
        if(a[i]!=0)
            k2=0;
    if(k1||k2)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}