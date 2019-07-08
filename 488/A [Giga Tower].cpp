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
void pairsort(int a[], int b[], int n)
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
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
ll isLucky(ll n)
{
    ll d=0;
    ll n1=mod(n);
    while(n1)
    {
        d++;
        n1=n1/10;
    }
    ll a[d];
    n=mod(n);
    for(int i=d-1;i>=0;i--)
    {
        a[i]=n%10;
        n=n/10;
    }
    for(int i=0;i<d;i++)
        if(a[i]==8)
            return 1;
    return 0;        
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    for(int i=1;i<1000000;i++)
    {
        if(isLucky(n+i))
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
    
}        