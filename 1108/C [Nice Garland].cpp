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
    int n;
    cin>>n;
    string s;
    cin>>s;
    string s1,s2,s3,s4,s5,s6;
    for(int i=0;i<n;i++)
    {
        if(i%3==0)
            s1+='R';
        else if(i%3==1)
            s1+='G';
        else
            s1+='B';
            
        if(i%3==0)
            s2+='R';
        else if(i%3==1)
            s2+='B';
        else
            s2+='G';
            
        if(i%3==0)
            s3+='G';
        else if(i%3==1)
            s3+='B';
        else
            s3+='R';
            
        if(i%3==0)
            s4+='G';
        else if(i%3==1)
            s4+='R';
        else
            s4+='B';
            
        if(i%3==0)
            s5+='B';
        else if(i%3==1)
            s5+='G';
        else
            s5+='R';
            
        if(i%3==0)
            s6+='B';
        else if(i%3==1)
            s6+='R';
        else
            s6+='G';    
    }
    int k1=0,k2=0,k3=0,k4=0,k5=0,k6=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s1[i])
            k1++;
        if(s[i]!=s2[i])
            k2++;
        if(s[i]!=s3[i])
            k3++;
        if(s[i]!=s4[i])
            k4++;
        if(s[i]!=s5[i])
            k5++;
        if(s[i]!=s6[i])
            k6++;    
    }
    int p=min(k1,min(k2,min(k3,min(k4,min(k5,k6)))));
    if(p==k1)
    {
        cout<<p<<endl;
        cout<<s1;
    }
    else if(p==k2)
    {
        cout<<p<<endl;
        cout<<s2;
    }
    else if(p==k3)
    {
        cout<<p<<endl;
        cout<<s3;
    }
    else if(p==k4)
    {
        cout<<p<<endl;
        cout<<s4;
    }
    else if(p==k5)
    {
        cout<<p<<endl;
        cout<<s5;
    }
    else if(p==k6)
    {
        cout<<p<<endl;
        cout<<s6;
    }
    return 0;
}