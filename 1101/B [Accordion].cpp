#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
#define pb push_back
const int N=1e5+5;
int max(int a,int b)
{
	if(a>=b)
		return a;
	else 	
		return b;
}
int min(int a,int b)
{
	if(a<=b)
		return a;
	else 	
		return b;
}
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
void pairsort(int a[], int b[], ll n)
{
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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
int isPrime(int n)
{
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
    if(r > n - r) r = n - r;
    long long ans = 1;
    int i;
    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
ll mod = 1e9+7;
ll modexpo(ll x,ll p)
{
    ll res = 1;
    x = x%mod;
    while(p)
    {
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
    string s1,s2="";
    cin>>s1;
    int k=1;
    while(k)
    {
    	k=0;
    	int k1=0;
    	for(int i=0;i<s1.size();i++)
    	{
    		if(s1[i]=='[')
    		{
    			k1=1;
    		}
    		if(k1)
    			s2+=s1[i];
    	}
    	s1=s2;
    	s2="";
    	//cout<<s1<<endl;
    	k1=0;
    	int n=s1.length();
    	for(int i=n-1;i>=0;i--)
    	{
    		if(s1[i]==']')
    		{
    			k1=1;
    		}
    		if(k1)
    			s2+=s1[i];
    	}
    	s1=s2;
    	s2="";
    	//cout<<s1<<endl;
    	n=s1.length();
    	for(int i=0;i<n;i++)
    		s2+=s1[n-1-i];
    	s1=s2;
    	s2="";
    	//cout<<s1<<endl;
    	k1=0;
    	int ind1=-1,ind2=-1;
    	for(int i=0;i<n;i++)
    		if(s1[i]==':')
    		{
    			ind1=i;
    			break;
    		}
    	for(int i=n-1;i>=0;i--)
    		if(s1[i]==':')
    		{
    			ind2=i;
    			break;
    		}	
    	if(ind1==-1||ind2==-1||ind1==ind2)
    	{
    	    cout<<-1<<endl;
    	    continue;
    	}
    	if(s1.length()>=1)
    		s2="[";	
    	for(int i=ind1;i<=ind2;i++)
    		s2+=s1[i];
    	s2+=']';
    	s1=s2;
    	//cout<<s1<<endl;
    	s2="[:";
    	n=s1.length();
    	for(int i=2;i<n-2;i++)
    		if(s1[i]=='|')
    			s2+=s1[i];
    	s2+=":]";
    	s1=s2;
    	//cout<<s1<<endl;
    	s2="";	
    	if(s1.length()<4)
    	{
    		cout<<-1<<endl;
    		continue;
    	}
    	cout<<s1.length()<<endl;
    }
    return 0;
}