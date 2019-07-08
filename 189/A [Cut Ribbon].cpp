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
ll look_up[10000];
ll dp(ll n,ll a,ll b,ll c)
{
    if(n==0)
        return 0;
    if(n<min(a,min(b,c))&&n!=0)
        return -9999;
    else
    {
        if(look_up[n]!=0)
            return look_up[n];
        return look_up[n]=max(max(dp(n-a,a,b,c),dp(n-b,a,b,c)),dp(n-c,a,b,c))+1;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<dp(n,a,b,c);
    cout<<endl;
    return 0;
    
}        