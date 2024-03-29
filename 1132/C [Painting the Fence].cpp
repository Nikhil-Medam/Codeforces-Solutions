#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
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
int n,m,l[5005],r[5005],a[5005],o[5005],t[5005],s,ans;
int32_t main()
{
    IOS;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
    	cin>>l[i]>>r[i];
    	a[l[i]]++;
    	a[r[i]+1]--;
    }
    for(int i=1;i<=n;i++)
    	a[i]+=a[i-1];
    for(int i=1;i<=n;i++)
    {	
    	if(a[i])
    		s++;
    	if(a[i]==1)
    		o[i]++;
    	if(a[i]==2)
    		t[i]++;
    }
    for(int i=1;i<=n;i++)
    	o[i]+=o[i-1],t[i]+=t[i-1];
    pairsort(l,r,m);
    for(int i=0;i<m;i++)
    	for(int j=i+1;j<m;j++)
    	{
    		int l1=l[i],r1=r[i],l2=l[j],r2=r[j],temp=0;
    		temp+=o[r1]-o[l1-1]+o[r2]-o[l2-1];
    		if(r1>=l2)
    			temp+=t[min(r1,r2)]-t[l2-1];
    		ans=max(ans,s-temp);
    	}
    cout<<ans;	
    return 0;
}