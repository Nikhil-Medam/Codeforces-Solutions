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
int n,a[1005],ans;
vector<int> v,V;
set<int> s;
int32_t main()
{
    IOS;
    cin>>n;
    if(n==1)
    {
    	cout<<0;
    	return 0;
    }
    for(int i=2;i<1005;i++)
    	if(!a[i])
    		for(int j=i*i;j<1005;j+=i)
    			a[j]=1;
    for(int i=2;i<1005;i++)
    	if(!a[i])
    		v.push_back(i);
    for(int i=0;i<v.size();i++)
    {
    	int x=v[i];
    	while(x<=1000)
    		V.push_back(x),x*=v[i];
    }
    sort(V.begin(),V.end());
    for(int i=0;i<V.size();i++)
    {
    	if(V[i]>n)
    		break;
    	ans++;
    }
    cout<<ans<<endl;
    for(int i=0;i<V.size();i++)
    {
    	if(V[i]>n)
    		break;
    	cout<<V[i]<<" ";
    }
    return 0;
}