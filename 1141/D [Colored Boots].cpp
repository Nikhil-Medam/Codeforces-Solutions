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
vector<int> v1[1000],v2[1000];
int32_t main()
{
    IOS;
    int n,ans=0,rem1,rem2;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    rem1=n,rem2=n;
    for(int i=0;i<n;i++)
    {
        v1[s1[i]].push_back(i+1);
        v2[s2[i]].push_back(i+1);
    }
    for(int i=97;i<123;i++)
    {
        if(v1[i].size()>=v2[i].size())
        {
            rem1-=v2[i].size();
            rem2-=v2[i].size();
            ans+=v2[i].size();
        }
        else
        {
        	rem1-=v1[i].size();
            rem2-=v1[i].size();
            ans+=v1[i].size();
        }
    }
    int q1=v1['?'].size(),q2=v2['?'].size(),p1=0,p2=0;
    rem1-=q1;
    rem2-=q2;
    ans+=min(rem1,q2)+min(rem2,q1);
    q1-=min(rem2,q1);
    q2-=min(rem1,q2);
    ans+=min(q1,q2);
    q1=v1['?'].size(),q2=v2['?'].size();
    cout<<ans<<endl;
    for(int i=97;i<123;i++)
    {
        if(v1[i].size()>=v2[i].size())
        {
            for(int j=0;j<v2[i].size();j++)
            	cout<<v1[i][j]<<" "<<v2[i][j]<<endl;
            for(int j=v2[i].size();j<v1[i].size()&&p2<q2;j++)
            	cout<<v1[i][j]<<" "<<v2['?'][p2++]<<endl;
        }
        else
        {
        	for(int j=0;j<v1[i].size();j++)
            	cout<<v1[i][j]<<" "<<v2[i][j]<<endl;
            for(int j=v1[i].size();j<v2[i].size()&&p1<q1;j++)
            	cout<<v1['?'][p1++]<<" "<<v2[i][j]<<endl;
        }
    }
    while(p1<q1&&p2<q2)
    	cout<<v1['?'][p1++]<<" "<<v2['?'][p2++]<<endl;
    return 0;
}