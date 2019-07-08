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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,x;
    cin>>n>>x;
    ll l[n],r[n];
    cin>>l[0]>>r[0];
    ll ans=0;
    ans=ans+l[0]-(l[0]-1)/x*x-1;
    ans=ans+r[0]-l[0]+1;
    n--;
    int i=1;
    while(n--)
    {
        cin>>l[i]>>r[i];
        ans=ans+(l[i]-r[i-1]-1)%x;
        ans=ans+r[i]-l[i]+1;
        i++;
    }
    cout<<ans;
    return 0;
    
}        