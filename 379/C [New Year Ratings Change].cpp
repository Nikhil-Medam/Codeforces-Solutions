#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=i;
    }
    pairsort(a,b,n);
    for(int i=1;i<n;i++)
    {
        if(a[i]<=a[i-1])
        {
            a[i]=a[i-1]+1;
        }
    }
    pairsort(b,a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}        