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
int n,a[2*N],b[2*N];
set<int> s;
int32_t main()
{
    IOS;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i],b[i]=i;
    pairsort(a+1,b+1,n);
    for(int i=2;i<=n;i++)
        s.insert(a[i]-a[i-1]);
    if(s.size()>3)
    {
        cout<<-1;
        return 0;
    }
    if(s.size()==3)
    {
        auto it=s.begin();
        int x=*it;
        it++;
        int y=*it;
        it++;
        int z=*it;
        it++;
        if(x+y==z)
        {
            for(int i=2;i<=n;i++)
                if(a[i]-a[i-1]!=z)
                {
                    cout<<b[i]<<" ";
                    return 0;
                }
        }
        cout<<-1;
        return 0;
    }
    if(s.size()==2)
    {
        set<int> ss;
        for(int i=2;i<n;i++)
            ss.insert(a[i]-a[i-1]);
        if(ss.size()==1)
        {
            cout<<b[n];
            return 0;
        }
        ss.clear();
        for(int i=3;i<=n;i++)
            ss.insert(a[i]-a[i-1]);
        if(ss.size()==1)
        {
            cout<<b[1];
            return 0;
        }
        auto it=s.begin();
        ss.clear();
        int ind;
        for(int i=2;i<=n;i++)
            if(a[i]-a[i-1]==*it)
            {
                ind=i;
                break;
            }
        vector<int> v;
        for(int i=1;i<=n;i++)
            if(i!=ind)
                v.push_back(a[i]);
        for(int i=1;i<v.size();i++)
            ss.insert(v[i]-v[i-1]);
        if(ss.size()==1)
            cout<<b[ind];
        else
            cout<<-1;
        return 0;
    }
    cout<<b[1];
    return 0;
}