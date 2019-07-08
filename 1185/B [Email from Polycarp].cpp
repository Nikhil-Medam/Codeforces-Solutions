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
int n;
string s1,s2;
vector<pair<char,int>> v1,v2;
int32_t main()
{
    IOS;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s1>>s2;
        v1.clear(),v2.clear();
        int cnt=1,p1=0,p2=0;
        v1.resize(s1.length()),v2.resize(s2.length());
        v1[p1]={s1[0],1},v2[p2]={s2[0],1};
        for(int j=1;j<s1.length();j++)
        {
            if(s1[j]!=s1[j-1])
                p1++,cnt=1;
            else
                cnt++;
            v1[p1]={s1[j],cnt};
        }
        cnt=1;
        for(int j=1;j<s2.length();j++)
        {
            if(s2[j]!=s2[j-1])
                p2++,cnt=1;
            else
                cnt++;
            v2[p2]={s2[j],cnt};
        }
        if(p1!=p2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int pp=0;
        for(int j=0;j<=p1;j++)
            if((v1[j].first!=v2[j].first)||(v1[j].second>v2[j].second))
            {
                cout<<"NO"<<endl;
                pp=1;
                break;
            }
        if(!pp)
            cout<<"YES"<<endl;
    }
    return 0;
}