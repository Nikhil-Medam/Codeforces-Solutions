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
int l,r,p1,p2,cnto1,cnte1,cnto2,cnte2,ans;
int32_t main()
{
    IOS;
    cin>>l>>r;
    l--;
    while(l>=pow(2,p1)-1)
        p1++;
    while(r>=pow(2,p2)-1)
        p2++;
    p1--,p2--;
    for(int i=0;i<p1;i++)
    {
        if(i%2)
            cnte1+=pow(2,i);
        else
            cnto1+=pow(2,i);
    }
    if(p1%2==0)
        cnto1+=l-cnto1-cnte1;
    else
        cnte1+=l-cnto1-cnte1;
    for(int i=0;i<p2;i++)
    {
        if(i%2)
            cnte2+=pow(2,i);
        else
            cnto2+=pow(2,i);
    }
    if(p2%2==0)
        cnto2+=r-cnto2-cnte2;
    else
        cnte2+=r-cnto2-cnte2;
    ans+=modexpo(cnto2,2);
    ans-=modexpo(cnto1,2);
    while(ans<0)
        ans+=mod;
    ans%=mod;
    ans+=(modexpo(cnte2,2)+cnte2%mod);
    ans%=mod;
    ans-=(modexpo(cnte1,2)+cnte1%mod);
    while(ans<0)
        ans+=mod;
    ans%=mod;
    cout<<ans;
    return 0;
}