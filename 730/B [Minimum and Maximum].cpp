#include<bits/stdc++.h>
using namespace std;
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
int t,n;
char c;
int32_t main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> mx,mx1,mi,mi1;
        for(int i=1;i<(n/2)*2;i+=2)
        {
            cout<<"? "<<i<<" "<<i+1<<endl;
            cin>>c;
            if(c=='>'||c=='=')
                mx.push_back(i),mi.push_back(i+1);
            else
                mx.push_back(i+1),mi.push_back(i);
        }
        if(n%2)
            mx.push_back(n),mi.push_back(n);
        int MX=mx[0],MI=mi[0];
        for(int i=1;i<mx.size();i++)
        {
            cout<<"? "<<mx[i]<<" "<<MX<<endl;
            cin>>c;
            if(c=='>')
                MX=mx[i];
        }
        for(int i=1;i<mi.size();i++)
        {
            cout<<"? "<<mi[i]<<" "<<MI<<endl;
            cin>>c;
            if(c=='<')
                MI=mi[i];
        }
        cout<<"! "<<MI<<" "<<MX<<endl;
    }
    return 0;
}