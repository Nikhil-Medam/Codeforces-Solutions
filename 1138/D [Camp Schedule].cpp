#include<bits/stdc++.h>
#pragma GCC optimize ("-O3")
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
const int N=5e5+5;
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
string s1,s2,t1,t2,t3;
int c10,c11,c20,c21,c30,c31,lps[N],p=1,len;
int32_t main()
{
    IOS;
    cin>>s1>>s2,t1=t2=s2;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='0')
            c10++;
        else
            c11++;
    }
    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]=='0')
            c20++;
        else
            c21++;
    }
    while(p<s2.length())
    {
        if(s2[p]==s2[len])
            len++,lps[p]=len,p++;
        else
        {
            if(len)
                len=lps[len-1];
            else
                lps[p]=0,p++;
        }
    }
    int x=lps[s2.length()-1];
    for(int i=x;i<s2.length();i++)
    {
        t3+=s2[i];
        if(s2[i]=='0')
            c30++;
        else
            c31++;
    }
    if(c10>=c20&&c11>=c21)
    {
        c10-=c20,c11-=c21,cout<<s2;
        while(c10>=c30&&c11>=c31&&(c30+c31))
            c10-=c30,c11-=c31,cout<<t3;
    }
    while(c10)
        cout<<0,c10--;
    while(c11)
        cout<<1,c11--;
    return 0;
}