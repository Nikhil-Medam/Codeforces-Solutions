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
int n,q,a[100005],l,r;
vector<int> v,v1;
int BinSearch(int x)
{
	int low=0,high=v.size()-1,mid,mid1=-1;
	while(low<=high)
	{
		mid=(low+high+1)/2;
		if(v[mid]<=x)
		{
			mid1=max(mid1,mid);
			low=mid+1;
		}
		else
			high=mid-1;
	}
	return mid1;
}
int32_t main()
{
    IOS;
    cin>>n;
    for(int i=0;i<n;i++)
    	cin>>a[i];
    cin>>q;
    sort(a,a+n);
    for(int i=1;i<n;i++)
    	v.push_back(a[i]-a[i-1]);
    sort(v.begin(),v.end());
    if(n==1)
    {
    	int d=1;
    	for(int i=1;i<n;i++)
    		if(a[i]!=a[i-1])
    			d++;
    	while(q--)
    	{
    		cin>>l>>r;
    		cout<<(r-l+1)*d<<" ";
    	}
    	return 0;
    }
    v1.push_back(v[0]);
    for(int i=1;i<v.size();i++)
    	v1.push_back(v1[i-1]+v[i]);
    while(q--)
    {
    	cin>>l>>r;
    	int ind=BinSearch(r-l+1);
    	int ans=(v.size()-ind)*(r-l+1);
    	if(ind!=-1)
    		ans+=v1[ind];
    	cout<<ans<<" ";
    }
    return 0;
}