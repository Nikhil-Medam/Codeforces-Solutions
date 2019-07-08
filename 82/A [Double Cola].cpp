#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
void pairsort(ll a[], ll b[], ll n)
{
    pair<ll, ll> pairt[n];
 

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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll k=0;
    while(5*(pow(2,k)-1)<n)
        k++;
    ll d=0;
    if(k>0)
        d=pow(2,k-1);
    n=n-5*(pow(2,k-1)-1);
    if(d!=0)
    {
    if(n>0&&n<=d)
        cout<<"Sheldon";
    if(n>d&&n<=2*d)
        cout<<"Leonard";
    if(n>2*d&&n<=3*d)
        cout<<"Penny";
    if(n>3*d&&n<=4*d)
        cout<<"Rajesh";
    if(n>4*d&&n<=5*d)
        cout<<"Howard"; 
    }
    else
    {
    if(n==1)
        cout<<"Sheldon";
    if(n==2)
        cout<<"Leonard";
    if(n==3)
        cout<<"Penny";
    if(n==4)
        cout<<"Rajesh";
    if(n==5)
        cout<<"Howard";
    }
        
    return 0;
}        