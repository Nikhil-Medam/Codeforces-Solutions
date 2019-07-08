#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
const int N=1e6+5;
ll max(ll a,ll b)
{
    if(a>=b)
        return a;
    else
        return b;
}
ll min(ll a,ll b)
{
    if(a>=b)
        return b;
    else
        return a;
}
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
ll mod(ll a)
{
    if(a>=0)
        return a;
    else
        return -a;
}
void pairsort(double a[], ll b[], ll n)
{
    pair<double, ll> pairt[n];
 

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
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
ll rev(ll n)
{
    ll ans=0;
    while(n)
    {
        ans=ans*10+n%10;
        n=n/10;
    }
    return ans;
}
ll fact(ll n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    if(n>=2)
        return n*fact(n-1);
}
int isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;        
}
int solve(int n,int m)
{   
        
}
long long C(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int isSquare(int n)
{
    if(ceil(sqrt(n))==sqrt(n))
        return 1;
    return 0;    
}
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int a[n/2]={0};
    for(int i=0;i<n/2;i++)
        cin>>a[i];
    vector<int> v,v1;
    int k=1;
    int t=1e5+5;
    for(int i=0;i<n/2&&k&&t;i++)
    {
        for(int j=1;j<sqrt(a[i]);j++)
        {
            if(a[i]%j==0)
            {
                v1.push_back(j);
                v1.push_back(a[i]/j);
            }
        }
        k=0;
        if(a[i]==1)
            break;
        if(i==0)
        {
            for(int j=v1.size()-2;j>=0;j-=2)
            {
                if(j+1<v1.size()&&v1[j]%2==v1[j+1]%2)
                {
                    int p=(v1[j+1]+v1[j])/2,q=(v1[j+1]-v1[j])/2;
                    v.push_back(q*q);
                    v.push_back(p*p);
                    k=1;
                    break;
                }
            }
        }
        else
        {
            for(int j=v1.size()-2;j>=0;j-=2)
            {
                if(j+1<v1.size())
                {
                    int p=(v1[j+1]+v1[j])/2,q=(v1[j+1]-v1[j])/2;
                    if(v1[j]%2==v1[j+1]%2&&q*q>v[v.size()-1])
                    {
                        v.push_back(q*q);
                        v.push_back(p*p);
                        k=1;
                        break;
                    }
                }   
            }
        }
        v1.clear();
        //t--;
    }    
    if(k==0||v.size()!=n)
        cout<<"No"<<endl;
    else
    {
        cout<<"Yes"<<endl;
        cout<<v[0]<<" ";
        for(int i=1;i<n;i++)
            cout<<v[i]-v[i-1]<<" ";
    }
    return 0;
}