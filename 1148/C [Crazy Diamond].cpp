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
int n,a[300005],b[300005],ans;
vector<int> v1,v2;
set<int> s;
void swap(int x,int y)
{
	int t1=a[x],t2=a[y];
	if(x>n/2&&a[x]<=n/2)
		s.erase(x);
	if(y>n/2&&a[y]<=n/2)
		s.erase(y);
	a[x]=t2,a[y]=t1;
	b[t1]=y,b[t2]=x;
	if(x>n/2&&a[x]<=n/2)
		s.insert(x);
	if(y>n/2&&a[y]<=n/2)
		s.insert(y);
	v1.push_back(x),v2.push_back(y);
}
int32_t main()
{
    IOS;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i],b[a[i]]=i;
    	if(i>n/2&&a[i]<=n/2)
    		s.insert(i);
    }
    for(int i=n/2;i>=1;i--)
    {	
    	if(a[i]>n/2)
    	{
    		if(a[n]<=n/2)
    			swap(i,n);
    		else
    		{
    			if(a[1]<=n/2)
    			{
    				swap(1,n);
    				swap(i,n);
    			}
    			else
    			{
    				auto it=s.rbegin();
    				swap(1,*it);
    				swap(1,n);
    				swap(i,n);
    			}
    		}
    	}
    }
    for(int i=n/2;i>=1;i--)
    {
    	if(i==a[i]&&n+1-i==a[n+1-i])
    		continue;
    	if(i!=a[i])
    	{
    		if(b[i]==1)
    		{
    			if(b[n+1-i]==n)
    			{
    				swap(1,n);
    				swap(i,n);
    				swap(1,n+1-i);
    				swap(1,n);
    			}
    			else
    			{
    				swap(1,n);
    				swap(1,b[n+1-i]);
    				swap(1,n+1-i);
    				swap(i,n);
    				swap(1,n);
    			}
    		}
    		else
    		{
    			if(b[n+1-i]==n)
    			{
    				swap(1,n);
    				swap(b[i],n);
    				swap(1,n+1-i);
    				swap(i,n);
    				swap(1,n);
    			}
    			else
    			{
    				swap(1,n);
    				swap(b[i],n);
    				swap(1,b[n+1-i]);
    				swap(i,n);
    				swap(1,n+1-i);
    				swap(1,n);
    			}
    		}
    	}
    	else
    	{
    		if(b[n+1-i]==n)
    		{
    			swap(1,n);
    			swap(1,n+1-i);
    			swap(1,n);
    		}
    		else
    		{
    			swap(1,n);
    			swap(1,b[n+1-i]);
    			swap(1,n+1-i);
    			swap(1,n);
    		}
    	}
    }
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++)
    	cout<<v1[i]<<" "<<v2[i]<<endl;
    return 0;
}