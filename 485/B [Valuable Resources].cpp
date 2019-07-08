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
    ll n;
    cin>>n;
    ll x[n],y[n];
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    ll xM=x[0];
    ll xm=x[0];
    ll yM=y[0];
    ll ym=y[0];
    for(int i=0;i<n;i++)
    {
        if(xM<x[i])
            xM=x[i];
        if(xm>x[i])
            xm=x[i];
        if(yM<y[i])
            yM=y[i];
        if(ym>y[i])
            ym=y[i];
    }
    cout<<max((xM-xm),(yM-ym))*max((xM-xm),(yM-ym));
    return 0;
}        