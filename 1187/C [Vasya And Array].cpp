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
int n,m,x,l,r,a[1005],b[1005],p=0;
vector<pair<int,int>> v0,v1;
map<int,int> M;
int32_t main()
{
    IOS;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>l>>r;
        if(!x)
            v0.push_back({l,r});
        else
            v1.push_back({l,r});
    }
    sort(v0.begin(),v0.end()),sort(v1.begin(),v1.end());
    int mx=0;
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i].first<=mx)
            b[i]=p,mx=max(mx,v1[i].second);
        else
            mx=v1[i].second,p++,b[i]=p;
    }
    for(int i=0;i<v1.size();i++)
        for(int j=v1[i].first;j<=v1[i].second;j++)
            a[j]=b[i];
    for(int i=0;i<v0.size();i++)
    {
        int cnt=0;
        for(int j=v0[i].first;j<=v0[i].second;j++)
            if(M[a[j]]==0)
                M[a[j]]=1,cnt++;
        if(cnt<2&&M[0])
            cnt=2;
        if(cnt<2)
        {
            cout<<"NO";
            return 0;
        }
        M.clear();
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++)
        if(a[i])
            a[i]=n+1-a[i];
    int cur=1;
    M.clear();
    for(int i=n;i>=1;i--)
    {
        if(!a[i])
        {
            if(a[i+1]!=0)
                cur++;
            a[i]=cur,cur++;
        }
        else
        {
            if(M[a[i]]==0)
                M[a[i]]=1,cur++;
            a[i]=cur;
        }
    }
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}