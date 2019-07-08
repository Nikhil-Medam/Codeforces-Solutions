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
    map<int,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int mi=s.length();
        int a[mi];
        int k=0,p=0;
        for(int j=0;j<mi;j++)
        {
            if(s[j]=='(')
            {
                p++;
                a[j]=p;
            }
            else
            {
                p--;
                a[j]=p;
            }
        }
        if(p>=0)
        {
            for(int j=0;j<mi;j++)
                if(a[j]<0)
                    k=1;
        } 
        else
        {
            stack<int> st;
            for(int j=0;j<mi;j++)
            {
                if(s[j]=='(')
                    st.push(1);
                else 
                {
                    if(st.size()!=0)
                        st.pop();
                }
            }
            if(st.size()!=0)
                k=1;
        }
        if(k==0)
        {
            m[p]++;
        }
    }
    int ans=m[0]/2;
    for(int i=1;i<2.5e5+5;i++)
    {
        ans+=min(m[i],m[-i]);
    }
    cout<<ans;
    return 0;
}