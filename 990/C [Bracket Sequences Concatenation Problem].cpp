#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
#define pb push_back
const int N=1e6+5;
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
    return __gcd(a,b); 
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
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int k=0,t=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='(')
                k++;
            else
                k--;
        }
        if(k>=0)
        {
            int k1=0;
            for(int j=0;j<s.length();j++)
            {
                if(s[j]=='(')
                    k1++;
                else
                    k1--;
                if(k1<0)
                    t=-1;
            }        
        }
        else
        {
            stack<int> st;
            for(int j=0;j<s.length();j++)
            {
                if(s[j]=='(')
                    st.push(0);
                else if(!st.empty())
                    st.pop();
            }
            if(!st.empty())
                t=-1;
        }
        if(t!=-1)
            m[k]++;
        //cout<<k<<" "<<m[k]<<endl;    
    }
    int ans=m[0]*m[0];
    for(int i=1;i<3e5+5;i++)
        ans+=m[i]*m[-i];
    cout<<ans;    
    return 0;
}