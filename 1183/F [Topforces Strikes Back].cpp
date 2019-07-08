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
int t,n,x;
set<int,greater<int>> s1,s2;
int32_t main()
{
    IOS;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>x,s1.insert(x),s2.insert(x);
        int ans=0,ans1=0,ans2=0,sum1=0,sum2=0,cnt1=0,cnt2=0,mx;
        auto it1=s1.begin(),it2=s2.begin();
        s2.erase(*it2);
        for(auto it=s1.begin();it!=s1.end();it++)
        {
            cnt1++;
            sum1+=*it;
            ans1=max(ans1,sum1);
            int p=*it;
            for(int j=2;j<=sqrt(p);j++)
                if(p%j==0)
                    s1.erase(j),s1.erase(p/j);
            if(cnt1==3)
                break;
        }
        for(auto it=s2.begin();it!=s2.end();it++)
        {
            cnt2++;
            sum2+=*it;
            ans2=max(ans2,sum2);
            int p=*it;
            for(int j=2;j<=sqrt(p);j++)
                if(p%j==0)
                    s2.erase(j),s2.erase(p/j);
            if(cnt2==3)
                break;
        }
        ans=max(ans1,ans2);
        cout<<ans<<endl;
        s1.clear(),s2.clear();
    }
    return 0;
}