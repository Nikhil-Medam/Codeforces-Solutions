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
int n,ans;
set<int> s[10];
map<char,int> M;
set<pair<int,char>> st;
string s1;
int32_t main()
{
    IOS;
    cin>>n;
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            s[i].insert(j);
    for(int i=0;i<n;i++)
    {
        cin>>s1;
        int x=s1[0]-'a';
        s[x].erase(0);
        for(int j=0;j<s1.length();j++)
            M[s1[j]]+=pow(10,s1.length()-1-j);
    }
    for(char i='a';i<='j';i++)
        st.insert(make_pair(M[i],i));
    while(st.size())
    {
        auto it=st.rbegin();
        pair<int,char> p=*it;
        auto it1=s[p.second-'a'].begin();
        ans+=p.first*(*it1);
        for(int i=0;i<10;i++)
            s[i].erase(*it1);
        st.erase(*it);
    }
    cout<<ans;
    return 0;
}