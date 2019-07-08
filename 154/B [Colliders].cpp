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
int n,m,a[100005],x;
vector<int> v;
map<int,int> M1,M2,M3;
char c;
int32_t main()
{
    IOS;
    cin>>n>>m;
    for(int i=2;i<100005;i++)
        if(!a[i])
            for(int j=i*i;j<100005;j+=i)
                a[j]=1;
    for(int i=2;i<100005;i++)
        if(!a[i])
            v.push_back(i);
    while(m--)
    {
        cin>>c>>x;
        vector<int> v1;
        for(int i=2;i<=sqrt(x);i++)
            if(x%i==0)
            {
                if(!a[i])
                    v1.push_back(i);
                if(i*i!=n&&!a[x/i])
                    v1.push_back(x/i);
            }
        if(!a[x])
            v1.push_back(x);
        if(c=='+')
        {
            if(M2[x])
            {
                cout<<"Already on"<<endl;
                continue;
            }
            int k=0,p;
            for(int i=0;i<v1.size();i++)
                if(M1[v1[i]])
                    k=1,p=M3[v1[i]];
            if(k)
                cout<<"Conflict with "<<p<<endl;
            else
            {
                cout<<"Success"<<endl;
                M2[x]++;
                for(int i=0;i<v1.size();i++)
                    M3[v1[i]]=x,M1[v1[i]]++;
            }
        }
        else
        {
            if(M2[x])
            {
                cout<<"Success"<<endl;
                M2[x]--;
                for(int i=0;i<v1.size();i++)
                    M1[v1[i]]--,M3[v1[i]]=0;
            }
            else
                cout<<"Already off"<<endl;
        }

    }
    return 0;
}