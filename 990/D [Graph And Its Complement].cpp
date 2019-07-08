#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
#define pb push_back
const int N=1e6+5;
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
void pairsort(int a[], int b[], ll n)
{
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
ll gcd(ll a, ll b)
{
    return __gcd(a,b); 
}
int isPrime(int n)
{
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
    if(r > n - r) r = n - r;
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
ll mod = 1e9+7;
ll modexpo(ll x,ll p)
{
    ll res = 1;
    x = x%mod;
    while(p)
    {
        if(p%2)
        {
            res = res * x;
        }
        p >>= 1;
        x = x*x % mod;
        res %= mod;
    }
    return res;
}
int32_t main()
{
    IOS;
    int n,a,b;
    cin>>n>>a>>b;
    int A[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            A[i][j]=0;
    if(a==1&&b==1)
    {
        if(n==2||n==3)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        for(int i=0;i<n-1;i++)
        {
            A[i][i+1]=1;
            A[i+1][i]=1;
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
            A[i][i]=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<A[i][j];
            cout<<endl;
        }
    }
    else if(a==1||b==1)
    {
        if(max(a,b)>n)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        for(int i=0;i<n-2;i++)
        {
            A[i][i+1]=1;
            A[i+1][i]=1;
        }
        int t=max(a,b)-1;
        for(int i=0;i<n&&t;i++)
        {
            for(int j=0;j<n;j++)
                if(A[i][j]==0&&i!=j)
                {
                    A[i][j]=1;
                    A[j][i]=1;
                }
            t--;
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
            A[i][i]=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a==1||i==j)
                    cout<<A[i][j];
                else
                    cout<<1-A[i][j];
            }
            cout<<endl;
        }
    }
    else
        cout<<"NO";
    return 0;
}