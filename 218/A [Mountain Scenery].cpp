#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k;
    ll a[2*n+1];
    cin>>n>>k;
    for(ll i=0;i<2*n+1;i++)
        cin>>a[i];
    ll p=1;
    while(k)
    {
        if(a[p]>a[p-1]+1&&a[p]>a[p+1]+1)
        {
            a[p]--;
            k--;
        }
        p++;
        p++;
    }
    for(ll i=0;i<2*n+1;i++)
        cout<<a[i]<<" ";
    return 0;
}        
