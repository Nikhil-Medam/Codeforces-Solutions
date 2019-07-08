#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
#define pb push_back
const int N=2e5+5;
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
int isPrime(int n)
{
    if(n < 2)
        return 0;
    if(n < 4)
        return 1;
    if(n % 2 == 0 or n % 3 == 0)
        return 0;
    for(int i = 5; i*i <= n; i += 6)
        if(n % i == 0 or n % (i+2) == 0)
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
    int n;
    cin>>n;
    int k1=0,k2=0,l=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='?')
        {
            k1=1;
            l--;
        }    
        else if(s[i]=='*')
        {
            k2=1;
            l--;
        }    
        else
            l++;
    }        
    if(n<l)
    {
        cout<<"Impossible";
        return 0;
    }
    if(n>=l&&k2==0)
    {
        int p=0;
        for(int i=0;i<s.length();i++)
            if(s[i]=='?')
                p++;
        if(l+p<n)
        {
            cout<<"Impossible";
            return 0;
        }
        p=n-l;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i+1]=='?'&&p)
            {
                cout<<s[i];
                p--;
            }
            else if(s[i+1]=='?')
            {
            }
            else if(s[i]!='?')
                cout<<s[i];
        }
        int m=s.length()-1;
        if(s[m]!='?')
            cout<<s[m];
        return 0;    
    }
    int ind=0;
    for(int i=0;i<s.length();i++)
        if(s[i]=='*')
            ind=i;
    for(int i=0;i<s.length()-1;i++)
    {
        if(i+1!=ind)
        {
            if(s[i+1]!='?'&&s[i+1]!='*'&&s[i]!='?'&&s[i]!='*')
                cout<<s[i];
        }
        else
        {
            for(int j=0;j<n-l;j++)
                cout<<s[i];
        }
    }
    int m=s.length()-1;
    if(s[m]!='?'&&s[m]!='*')
        cout<<s[m];
    return 0;
}