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

int32_t main()
{
    IOS;
    int q;
    cin>>q;
    while(q--)
    {
        int n,m;
        cin>>n>>m;
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        int w=(n*m+1)/2,b=n*m/2,c=0;
        if(((diff(y2,y1)+1)*(diff(x2,x1)+1))%2==0)
        {
            w+=(diff(y2,y1)+1)*(diff(x2,x1)+1)/2;
            b-=(diff(y2,y1)+1)*(diff(x2,x1)+1)/2;
        }
        else
        {
            if((x1+y1)%2==0)
            {
                w+=(diff(y2,y1)+1)*(diff(x2,x1)+1)/2;
                b-=(diff(y2,y1)+1)*(diff(x2,x1)+1)/2;
            }
            else
            {
                w+=(diff(y2,y1)+1)*(diff(x2,x1)+1)/2+1;
                b-=(diff(y2,y1)+1)*(diff(x2,x1)+1)/2;
            }
        }
        if(((diff(y4,y3)+1)*(diff(x4,x3)+1))%2==0)
        {
            b+=(diff(y4,y3)+1)*(diff(x4,x3)+1)/2;
            w-=(diff(y4,y3)+1)*(diff(x4,x3)+1)/2;
        }
        else
        {
            if((x3+y3)%2==1)
            {
                b+=(diff(y4,y3)+1)*(diff(x4,x3)+1)/2;
                w-=(diff(y4,y3)+1)*(diff(x4,x3)+1)/2;
            }
            else
            {
                b+=(diff(y4,y3)+1)*(diff(x4,x3)+1)/2+1;
                w-=(diff(y4,y3)+1)*(diff(x4,x3)+1)/2+1;
            }
        }
        c=(min(x4,x2)-max(x3,x1)+1);
        if(c<0)
            c=0;
        c*=(min(y4,y2)-max(y3,y1)+1);;
        if(c<0)
            c=0;
        if(c%2==0)
        {
            w-=c/2;
            b+=c/2;
        }
        else
        {
            if((max(x1,x3)+max(y1,y3))%2==1)
            {
                w-=c/2+1;
                b+=c/2+1;
            }
            else
            {
                w-=c/2;
                b+=c/2;
            }
        }
        cout<<w<<" "<<n*m-w<<endl;
    }
    return 0;
}