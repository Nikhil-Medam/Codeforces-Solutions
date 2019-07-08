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
int n,a[200005],ne,po,z;
set<int> s;
int32_t main()
{
    IOS;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>0)
            po++;
        else if(a[i]<0)
            ne++;
        else
            z++;
    }
    if(z)
    {
        int ind;
        for(int i=1;i<=n;i++)
            if(!a[i])
            {
                ind=i;
                break;
            }
        for(int i=1;i<=n;i++)
            s.insert(i);
        for(int i=ind+1;i<=n;i++)
            if(!a[i])
            {
                cout<<1<<" "<<i<<" "<<ind<<endl;
                s.erase(i);
            }
        if(ne%2)
        {
            int m=-1e18,in;
            for(auto it=s.begin();it!=s.end();it++)
                if(a[*it]<0&&a[*it]>m)
                    m=a[*it],in=*it;
            cout<<1<<" "<<in<<" "<<ind<<endl,ne--;
            s.erase(in);
        }   
        if(po+ne)
        {
            cout<<2<<" "<<ind<<endl;
            s.erase(ind);
            auto it1=s.begin();
            int x=*it1;
            s.erase(x);
            for(auto it=s.begin();it!=s.end();it++)
                cout<<1<<" "<<*it<<" "<<x<<endl;
        }
        return 0;
    }
    if(ne%2)
    {
        int m=-1e18,ind;
        for(int i=1;i<=n;i++)
            if(a[i]<0&&a[i]>m)
                m=a[i],ind=i;
        cout<<2<<" "<<ind<<endl;
        if(ind==1)
        {
            for(int i=3;i<=n;i++)
                cout<<1<<" "<<i<<" "<<2<<endl;
        }
        else
        {
            for(int i=2;i<=n;i++)
                if(i!=ind)
                    cout<<1<<" "<<i<<" "<<1<<endl;
        }
    }
    else
    {
        for(int i=2;i<=n;i++)
            cout<<1<<" "<<i<<" "<<1<<endl;
    }
    return 0;
}