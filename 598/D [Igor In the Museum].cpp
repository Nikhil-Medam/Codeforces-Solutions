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
int n,m,q,x,y,vis[1005][1005],cnt=1;
char a[1005][1005];
map<int,int> M;
void dfs(int x,int y)
{
    vis[x][y]=cnt;
    if(x<n&&a[x+1][y]!=a[x][y]&&!vis[x+1][y])
        M[cnt]++;
    if(x<n&&a[x+1][y]==a[x][y]&&!vis[x+1][y])
        dfs(x+1,y);
    if(x>1&&a[x-1][y]!=a[x][y]&&!vis[x-1][y])
        M[cnt]++;
    if(x>1&&a[x-1][y]==a[x][y]&&!vis[x-1][y])
        dfs(x-1,y);
    if(y>1&&a[x][y-1]!=a[x][y]&&!vis[x][y-1])
        M[cnt]++;
    if(y>1&&a[x][y-1]==a[x][y]&&!vis[x][y-1])
        dfs(x,y-1);
    if(y<m&&a[x][y+1]!=a[x][y]&&!vis[x][y+1])
        M[cnt]++;
    if(y<m&&a[x][y+1]==a[x][y]&&!vis[x][y+1])
        dfs(x,y+1);
}
int32_t main()
{
    IOS;
    cin>>n>>m>>q;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(!vis[i][j]&&a[i][j]=='.')
                dfs(i,j),cnt++;
    while(q--)
    {
        cin>>x>>y;
        cout<<M[vis[x][y]]<<endl;
    }
    return 0;
}