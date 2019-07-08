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
void pairsort(char a[], char b[], ll n)
{
    pair<char, char> pairt[n];
 

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
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

ll mod = 1e9+7;
ll modexpo(ll x,ll p)
{
    ll res = 1;
    x = x%mod;
    while(p)
    {
        if(p%2)
        {
            res = res * x;
        }
        p >>= 1;
        x = x*x % mod;
        res %= mod;
    }
    return res;
}
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    char a[2*n],b[2*n];
    for(int i=0;i<2*n;i++)
        cin>>a[i];
    for(int i=0;i<2*n;i++)
        cin>>b[i];
    pairsort(a,b,2*n);
    string s1="",s2="";
    for(int i=2*n-1;i>=0;i--)
    {
        if(i%2)
            s1+=a[i];
        else
            s2+=b[i];
    }
    sort(s1.begin(),s1.end(),greater<char>());
    sort(s2.begin(),s2.end(),greater<char>());
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i]=='1'&&s2[i]=='0')
            k=1;
        if(s2[i]=='1'&&s1[i]=='0')
            k=2;    
        if(k)
            break;
    }
    if(k==0)
        cout<<"Draw";
    else if(k==1)
        cout<<"First";
    else
        cout<<"Second";
    return 0;
}