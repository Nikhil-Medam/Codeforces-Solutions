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
int a,b,c,l=7e18,ans=7e18;
vector<int> v;
int32_t main()
{
    IOS;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0;
        return 0;
    }
    c=diff(a,b);
    for(int i=1;i<=sqrt(c);i++)
    {
        if(c%i==0)
        {
            if(i*i!=c)
                v.push_back(i),v.push_back(c/i);
            else
                v.push_back(i);
        }        
    }
    for(int i=0;i<v.size();i++)
    {
        if(a%v[i]==0)
        {
            int p=std::lcm(a,b);
            if(p<=l)
            {
                l=p;
                ans=0;
            }
            continue;
        }
        int x=a+v[i]-a%v[i],y=b+v[i]-b%v[i];
        int p=std::lcm(x,y);
        if(p<l)
        {
            l=p;
            ans=v[i]-a%v[i];
        }
        else if(p==l&&v[i]-a%v[i]<ans)
            ans=v[i]-a%v[i];
    }
    cout<<ans;
    return 0;
}