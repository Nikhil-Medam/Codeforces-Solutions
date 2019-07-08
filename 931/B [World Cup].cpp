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
int n,a,b,ans=1,cnt,r;
queue<int> q;
int32_t main()
{
    IOS;
    cin>>n>>a>>b,r=log2(n);
    if(a>b)
        swap(a,b);
    for(int i=1;i<=n;i++)
        q.push(i);
    while(q.size()>=2)
    {
        cnt++;
        int x,y;
        x=q.front(),q.pop(),y=q.front(),q.pop();
        if(x>y)
            swap(x,y);
        if(x==a&&y==b)
        {
            if(ans==r)
                cout<<"Final!"<<endl;
            else
                cout<<ans<<endl;
        }
        if(x==a||y==a)
            q.push(a);
        else if(x==b||y==b)
            q.push(b);
        else 
            q.push(x);
        if(cnt>=n/2)
            cnt=0,n/=2,ans++;
    }
    return 0;
}