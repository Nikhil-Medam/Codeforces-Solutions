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
    int m,n,k=0;
    cin>>m>>n;
    int a[m][n],b[m][n],s1[m],s2[n];
    for(int i=0;i<m;i++)
    	for(int j=0;j<n;j++)
    		cin>>a[i][j];
    memset(s1,0,sizeof(s1));
    memset(s2,0,sizeof(s2));
    memset(b,0,sizeof(b));
    for(int i=0;i<m;i++)
    	for(int j=0;j<n;j++)
    		s1[i]+=a[i][j];
    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    		s2[i]+=a[j][i];	
    for(int i=0;i<m;i++)
    	for(int j=0;j<n;j++)
    		if(s1[i]+s2[j]==m+n)
    			b[i][j]=1;
    memset(s1,0,sizeof(s1));
    memset(s2,0,sizeof(s2));		
    for(int i=0;i<m;i++)
    	for(int j=0;j<n;j++)
    		s1[i]+=b[i][j];
    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    		s2[i]+=b[j][i];		
    for(int i=0;i<m;i++)
    	for(int j=0;j<n;j++)
    	{	
    		if(a[i][j]==0&&(s1[i]!=0||s2[j]!=0))
    			k=1;	
    		if(a[i][j]==1&&(s1[i]+s2[j]==0))
    			k=1;
    	}						
    if(k)
    {
    	cout<<"NO";
    	return 0;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<m;i++)
    {
    	for(int j=0;j<n;j++)
    		cout<<b[i][j]<<" ";
    	cout<<endl;
    }
    return 0;
}