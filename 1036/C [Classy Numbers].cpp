#include<bits/stdc++.h>
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
int t,l,r,cnt=1;
set<int> s;
map<int,int> M;
map<pair<int,int>,int> MM;
void rec(int x,int nz,int d)
{
    if(d>18)
        return;
    s.insert(x);
    int X=10*x;
    if(nz<3)
    {
        rec(X,nz,d+1);
        for(int i=1;i<10;i++)
            rec(X+i,nz+1,d+1);
    }
    else
        rec(X,nz,d+1);
}
int32_t main()
{
    IOS;
    s.insert(1e18);
    for(int i=1;i<=9;i++)
        rec(i,1,1);
    for(auto it=s.begin();it!=s.end();it++)
        M[*it]=cnt++;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(MM[make_pair(l,r)])
        {
            cout<<MM[make_pair(l,r)]<<endl;
            continue;
        }
        auto it1=s.lower_bound(l),it2=s.lower_bound(r);
        if(it2!=s.begin()&&*it2!=r&&*it2>*it1)
            it2--;
        if(*it1>=l&&*it1<=r&&*it2>=l&&*it2<=r&&*it2>=*it1)
            cout<<M[*it2]-M[*it1]+1<<endl,MM[make_pair(l,r)]=M[*it2]-M[*it1]+1;
        else
            cout<<0<<endl;
    }
    return 0;
}