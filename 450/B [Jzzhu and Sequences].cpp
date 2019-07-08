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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll d=1000000007;
    ll x,y;
    cin>>x>>y;
    ll n;
    cin>>n;
    ll ans;
    if(n%6==1)
        ans=x%d;
    if(n%6==2)
        ans=y%d;
    if(n%6==3)
        ans=(y-x)%d;
    if(n%6==4)
        ans=(-x)%d;
    if(n%6==5)
        ans=(-y)%d;
    if(n%6==0)
        ans=(x-y)%d;
    if(ans<0)
        ans=ans+d;
    cout<<ans;    
    return 0;
}        