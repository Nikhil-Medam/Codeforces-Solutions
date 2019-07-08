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
int n,a[100005];
char b[100005];
string s[100005];
map<char,int> M;
map<pair<int,char>,multiset<string>> M1;
map<int,multiset<string>> M2;
multiset<pair<string,string>> s1,s2;
int32_t main()
{
    IOS;
    cin>>n;
    M['a']=1,M['e']=1,M['i']=1,M['o']=1,M['u']=1;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        int cnt=0;
        char c;
        for(int j=0;j<s[i].length();j++)
        {
            cnt+=M[s[i][j]];
            if(M[s[i][j]])
                c=s[i][j];
        }
        a[i]=cnt,b[i]=c;
        M1[{a[i],b[i]}].insert(s[i]);
        M2[cnt].insert(s[i]);

    }
    for(auto it=M1.begin();it!=M1.end();it++)
    {
        multiset<string> ss=it->second;
        while(ss.size()>=2)
        {
            auto it1=ss.begin(),it2=ss.begin();
            it2++;
            pair<int,char> p1=it->first;
            auto it3=M2[p1.first].find(*it1);
            M2[p1.first].erase(it3);
            it3=M2[p1.first].find(*it2);
            M2[p1.first].erase(it3);
            s2.insert(make_pair(*it1,*it2));
            ss.erase(it1),ss.erase(it2);
        }
        M1[it->first].clear();
    }
    for(auto it=M2.begin();it!=M2.end();it++)
    {
        multiset<string> ss=it->second;
        while(ss.size()>=2)
        {
            auto it1=ss.begin(),it2=ss.begin();
            it2++;
            s1.insert(make_pair(*it1,*it2));
            ss.erase(it1),ss.erase(it2);
        }
        M2[it->first].clear();
    }
    while(s2.size()>s1.size())
    {
        auto it=s2.begin();
        s1.insert(*it),s2.erase(it);
    }
    cout<<min(s1.size(),s2.size())<<endl;
    for(auto it1=s1.begin(),it2=s2.begin();it1!=s1.end()&&it2!=s2.end();it1++,it2++)
    {
        pair<string,string> p1=*it1,p2=*it2;
        cout<<p1.first<<" "<<p2.first<<endl;
        cout<<p1.second<<" "<<p2.second<<endl;
    }
    return 0;
}