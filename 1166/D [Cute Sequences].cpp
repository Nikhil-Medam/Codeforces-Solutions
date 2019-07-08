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
double q,a,b,m,c[62],d[62];
int32_t main()
{
    IOS;
    cin>>q;
    c[0]=1,d[0]=0;
    for(int i=1;i<=61;i++)
    {
    	c[i]=pow(2,i-1);
    	d[i]=c[i];
    }
    while(q--)
    {
    	cin>>a>>b>>m;
    	int k=-1;
    	for(int i=0;i<=60;i++)
    		if(b>=c[i]*a+d[i]&&b<=c[i]*a+d[i]*m)
    		{
    			k=i;
    			break;
    		}
    	if(k==-1)
    	{
    		cout<<k<<endl;
    		continue;
    	}
    	vector<int> v;
    	int s=0,x=b,k1=0;
    	for(int i=0;i<=k;i++)
    		v.push_back(c[i]*a+d[i]),s+=v[i];
    	int p=diff(b,v[v.size()-1]);
    	v[v.size()-1]=b;
    	for(int i=(int)v.size()-2;i>=1;i--)
    	{
    		if(v[i+1]%2==0)
    			v[i]=v[i+1]/2;
    		else
    		{
    			if(!k1)
    				v[i]=v[i+1]/2,k1=1;
    			else
    				v[i]=v[i+1]-v[i+1]/2,k1=0;
    		}
    	}
    	cout<<v.size()<<" ";
    	for(int i=0;i<v.size();i++)
    		cout<<v[i]<<" ";
    	cout<<endl;
    }
    return 0;
}