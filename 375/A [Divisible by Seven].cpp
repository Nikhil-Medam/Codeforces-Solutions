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
string s,t="1689",x;
int a[10],cnt=24,r;
int32_t main()
{
    IOS;
    cin>>s;
    for(int i=0;i<s.length();i++)
    	a[s[i]-'0']++;
    for(int i=9;i>=1;i--)
    {
    	for(int j=0;j<a[i]-1;j++)
    		x+=(char)(i+'0');
    	if(i!=1&&i!=6&&i!=8&&i!=9&&a[i])
    		x+=(char)(i+'0');
    }
    for(int i=0;i<x.length();i++)
    	r=10*r+(x[i]-'0'),r%=7;
    while(cnt--)
    {
    	int p=r;
    	for(int i=0;i<t.length();i++)
    		p=10*p+(t[i]-'0'),p%=7;
    	if(!p)
    	{
    		cout<<x<<t;
    		for(int i=0;i<a[0];i++)
    			cout<<0;
    		return 0;
    	}
    	next_permutation(t.begin(),t.end());
    }
    return 0;
}