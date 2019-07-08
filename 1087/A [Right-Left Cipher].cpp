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
void pairsort(int a[], int b[], ll n)
{
    pair<int, int> pairt[n];
 

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
    string s;
    cin>>s;
    int n=s.length();
    if(n%2)
    {
        string s1="",s2="",s3;
        s3+=s[(n-1)/2];
        for(int i=(n-1)/2-1;i>=0;i--)
            s1+=s[i];
        for(int i=(n-1)/2+1;i<n;i++)
            s2+=s[i];
        int k1=0,k2=0;    
        for(int i=0;i<n-1;i++)
        {
            if(i%2)
            {
                s3+=s1[k1];
                k1++;
            }
            else
            {
                s3+=s2[k2];
                k2++;
            }
        }
        cout<<s3<<endl;
    }
    else
    {
        string s1="",s2="",s3;
        for(int i=n/2-1;i>=0;i--)
            s1+=s[i];
        for(int i=n/2;i<n;i++)
            s2+=s[i];
        int k1=0,k2=0;    
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                s3+=s1[k1];
                k1++;
            }
            else
            {
                s3+=s2[k2];
                k2++;
            }
        }
        cout<<s3<<endl;
    }
    return 0;
}