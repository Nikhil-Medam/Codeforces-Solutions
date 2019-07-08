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
double l3,l4,l5,h3,h4,h5,H3,H4,H5,a3,a4,a5,PI=3.141592653589793238462643383279502884197169399;
int32_t main()
{
    IOS;
    cin>>l3>>l4>>l5;
    h3=l3*sin(60*PI/180)-(l3/2)*tan(30*PI/180),h4=l4/sqrt(2),h5=(l5/2)*(1/cos(54*PI/180));
    H3=sqrt(l3*l3-h3*h3),H4=sqrt(l4*l4-h4*h4),H5=sqrt(l5*l5-h5*h5);
    a3=0.5*l3*l3*sin(60*PI/180),a4=l4*l4,a5=5*(l5/2)*(l5/2)*tan(54*PI/180);
    cout<<fixed<<setprecision(20)<<(a3*H3+a4*H4+a5*H5)/3;
    return 0;
}