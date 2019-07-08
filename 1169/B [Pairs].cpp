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
int n,m,a[300005],b[300005],c[4],k,x,y,cnt=24;
vector<int> v;
int32_t main()
{
    IOS;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
    	cin>>a[i]>>b[i];
    	int x=min(a[i],b[i]),y=max(a[i],b[i]);
    	a[i]=x,b[i]=y;
    }
    pairsort(a,b,m);
    x=a[0],y=b[0];
    c[0]=x,c[1]=y;
    for(int i=0;i<m;i++)
    	if(a[i]!=x&&b[i]!=x&&a[i]!=y&&b[i]!=y)
    	{
    		k=1;
    		c[2]=a[i],c[3]=b[i];
    		break;
    	}
    if(!k)
    {
    	cout<<"YES";
    	return 0;
    }
    sort(c,c+4);
    k=0;
    while(cnt--)
    {
    	x=c[0],y=c[1];
    	int k1=0;
    	for(int i=0;i<m;i++)
    		if(a[i]!=x&&b[i]!=x&&a[i]!=y&&b[i]!=y)
    		{
    			k1=1;
    			break;
    		}
    	if(!k1)
    	{
    		k=1;
    		break;
    	}
    	next_permutation(c,c+4);
    }
    if(k)
    	cout<<"YES";
    else
    	cout<<"NO";
    return 0;
}