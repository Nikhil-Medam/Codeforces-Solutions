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
int n,q,a[N],x,cnt,M,ind=-1;
deque<int> d;
vector<int> v1,v2;
int32_t main()
{
    IOS;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>a[i],d.push_back(a[i]),M=max(M,a[i]);
    cnt=2*n+5;
    v1.resize(cnt+1),v2.resize(cnt+1);
    int p=1;
    while(cnt--)
    {   
        if(d.front()==M&&ind==-1)
            ind=p;
        int x,y;
        x=d.front();
        d.pop_front();
        y=d.front();
        d.pop_front();
        v1[p]=x,v2[p]=y;
        d.push_front(max(x,y)),d.push_back(min(x,y));
        p++;
    }
    while(q--)
    {
        cin>>x;
        if(x<v1.size())
            cout<<v1[x]<<" "<<v2[x]<<endl;
        else
        {
            x-=ind;
            x%=(n-1);
            cout<<v1[ind+x]<<" "<<v2[ind+x]<<endl;
        }
    }
    return 0;
}