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
const int N=1e6+5;
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
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int n,m,x,y,d1[N],d2[N];
vector<pair<int,int>> v,ans;
int32_t main()
{
    IOS;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    	cin>>x>>y,v.push_back({x,y}),d1[x]++,d1[y]++,d2[x]++,d2[y]++;
    while(1)
    {
    	for(int i=0;i<v.size();i++)
    	{
    		if(2*(d1[v[i].first]-1)>=d2[v[i].first]&&2*(d1[v[i].second]-1)>=d2[v[i].second])
    			d1[v[i].first]--,d1[v[i].second]--;
    		else
    			ans.push_back(v[i]);
    	}
    	if(ans.size()<=(n+m+1)/2)
    	{
    		cout<<ans.size()<<endl;
    		for(int i=0;i<ans.size();i++)
    			cout<<ans[i].first<<" "<<ans[i].second<<endl;
    		return 0;
    	}
    	ans.clear();
    	for(int i=1;i<=n;i++)
    		d1[i]=d2[i];
    	shuffle(v.begin(),v.end(),rng);
    }
    return 0;
}