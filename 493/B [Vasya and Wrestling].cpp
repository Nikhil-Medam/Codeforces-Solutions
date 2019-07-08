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
    int n,sum1=0,sum2=0,p,k=0;
    cin>>n;
    vector<int> v1,v2;
    for(int i=0;i<n;i++)
    {
    	cin>>p;
    	if(p>0)
    		sum1+=p,v1.push_back(p);
    	else
    		sum2+=-p,v2.push_back(-p);
    }
    if(sum1>sum2)
    	cout<<"first";
    else if(sum2>sum1)
    	cout<<"second";
    else
    {
    	if((v1.size())!=(v2.size()))
    	{
    		for(int i=0;i<min(v1.size(),v2.size());i++)
    			if(v1[i]!=v2[i])
    			{
    				if(v1[i]>v2[i])
    					k=1;
    				else
    					k=2;
    				break;
    			}
    		if(k==1)
    			cout<<"first";
    		else
    			cout<<"second";		
    	}
    	else
    	{	
    		for(int i=0;i<min(v1.size(),v2.size());i++)
    			if(v1[i]!=v2[i])
    			{
    				if(v1[i]>v2[i])
    					k=1;
    				else
    					k=2;
    				break;
    			}
    		if(k==1)
    			cout<<"first";
    		else if(k==2)
    			cout<<"second";
    		if(k)
    			return 0;
    		if(p>0)
    			cout<<"first";
    		else
    			cout<<"second";
    	}	
    }
    return 0;
}