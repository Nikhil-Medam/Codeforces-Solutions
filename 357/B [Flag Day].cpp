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
int32_t main()
{
    IOS;
    int n,m;
    cin>>n>>m;
    int a[n+1],b[m],c[m],d[m];
    memset(a,0,sizeof(a));
    for(int i=0;i<m;i++)
    {
    	cin>>b[i]>>c[i]>>d[i];
    	if(!i)
    	{
    		a[b[i]]=1,a[c[i]]=2,a[d[i]]=3;
    		continue;
    	}
    	if(a[b[i]]||a[c[i]]||a[d[i]])
    	{
    		int x=a[b[i]]^a[c[i]]^a[d[i]],y=1^2^3;
    		if(a[b[i]]&&a[c[i]]&&a[d[i]])
    			continue;
    		if(a[b[i]])
    		{
    			if(a[c[i]])
    				a[d[i]]=y^x;
    			else if(a[d[i]])
    				a[c[i]]=y^x;
    			else
    			{
    				a[c[i]]=(x)%3+1;
    				a[d[i]]=(x+1)%3+1;
    			}	
    		}
    		else if(a[c[i]])
    		{
				if(a[b[i]])
    				a[d[i]]=y^x;
    			else if(a[d[i]])
    				a[b[i]]=y^x;
    			else
    			{
    				a[b[i]]=(x)%3+1;
    				a[d[i]]=(x+1)%3+1;
    			}
    		}
    		else if(a[d[i]])
    		{
    			if(a[b[i]])
    				a[c[i]]=y^x;
    			else if(a[c[i]])
    				a[b[i]]=y^x;
    			else
    			{
    				a[b[i]]=(x)%3+1;
    				a[c[i]]=(x+1)%3+1;
    			}
    		}
    	}
    	else
    		a[b[i]]=1,a[c[i]]=2,a[d[i]]=3;	
    }
    for(int i=1;i<=n;i++)
    	cout<<a[i]<<" ";
    return 0;
}