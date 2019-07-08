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
    map<int,pair<int,int>> m;
    int k;
    cin>>k;
    vector<int> v[k];
    for(int i=0;i<k;i++)
    {
        int n;
        cin>>n;
        v[i].resize(n);
        for(int j=0;j<n;j++) 
            cin>>v[i][j];    
    }
    for(int i=0;i<k;i++)
    {
        int s=0;
        for(int j=0;j<v[i].size();j++)
            s+=v[i][j];
        for(int j=0;j<v[i].size();j++)
        {
            if(m.find(s-v[i][j])!=m.end()&&m[s-v[i][j]].first!=0&&m[s-v[i][j]].second!=i+1)
            {
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<j+1<<endl;
                cout<<m[s-v[i][j]].second<<" "<<m[s-v[i][j]].first<<endl;
                return 0;
            }
            else
            {
                m[s-v[i][j]]=make_pair(j+1,i+1);
            }
        }
    }
    cout<<"NO";
    return 0;
}