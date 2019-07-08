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
void pairsort(double a[], ll b[], ll n)
{
    pair<double, ll> pairt[n];
 

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
int isSquare(int n)
{
    if(ceil(sqrt(n))==sqrt(n))
        return 1;
    return 0;    
}
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    if(n==1)
    {
        cout<<1;
        return 0;
    }    
    int x=0,y=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==0)
            {
                x=i;
                y=j;
                break;
            }
    int s1=0,s2=0,s=0;        
    for(int j=0;j<n;j++)
        s1+=a[x][j];
    for(int i=0;i<n;i++)
        s2+=a[i][y];
    if(s1==s2)
    {
        for(int i=0;i<n;i++)
        {
            if(i!=x)
            {
                for(int j=0;j<n;j++)
                {
                    s+=a[i][j];
                }
                break;
            }
        }
        if(s>s1)
        {
            a[x][y]=s-s1;
            int p=0;
            for(int i=0;i<n;i++)
            {
                int s3=0;
                for(int j=0;j<n;j++)
                    s3+=a[i][j];
                if(s3!=s)
                    p=1;
            }
            for(int i=0;i<n;i++)
            {
                int s3=0;
                for(int j=0;j<n;j++)
                    s3+=a[j][i];
                if(s3!=s)
                    p=1;
            }
            int s3=0,s4=0;
            for(int i=0;i<n;i++)
                s3+=a[i][i];
            for(int i=0;i<n;i++)
                s4+=a[i][n-1-i];
            if(s3!=s||s4!=s)
                p=1;
            if(p)
                cout<<-1;
            else
                cout<<s-s1;
        }
        else
            cout<<-1;
    }
    else
        cout<<-1;
    
    return 0;
}