#include<bits/stdc++.h>
#pragma GCC optimize ("-O3")
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
#define double long double
#define pb push_back
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define diff(a,b) (a>b?a-b:b-a)
const int N=1e5+5;
void pairsort(int a[], int b[], int n){
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
int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
int isPrime(int n){
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
    if(r>n-r) 
        r=n-r;
    long long ans=1;
    for(int i=1;i<=r;i++){
        ans*=n-r+i;
        ans/=i;
    }
    return ans;
}
int mod = 1e9+7;
int modexpo(int x,int p){
    int res = 1;
    x = x%mod;
    while(p){
        if(p%2)
            res = res * x;
        p >>= 1;
        x = x*x % mod;
        res %= mod;
    }
    return res;
}
int n,a,b,x,y,s,ans;
vector<pair<int,int>> v;
bool comp(const pair<int,int> a,const pair<int,int> b)
{
    return a.first-a.second>b.first-b.second;
}
int32_t main()
{
    IOS;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++)
        cin>>x>>y,v.push_back({x,y});
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<n;i++)
    {
        if(i<b)
            s+=max(v[i].first,v[i].second);
        else
            s+=v[i].second;
    }
    if(!b)
    {
        cout<<s;
        return 0;
    }
    x=pow(2,a);
    ans=s;
    for(int i=0;i<n;i++)
    {
        int ss=s;
        if(i<b)
        {
            ss-=max(v[i].first,v[i].second);
            ss+=v[i].first*x;
            ans=max(ans,ss);
        }
        else
        {
            ss-=v[i].second;
            ss+=v[i].first*x;
            ss-=max(v[b-1].first,v[b-1].second);
            ss+=v[b-1].second;
            ans=max(ans,ss);
        }
    }
    cout<<ans;
    return 0;
}