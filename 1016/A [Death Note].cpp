#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll a[n];
    ll s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
        cout<<s/m<<" ";
        s=s%m;
    }    
        
    return 0;
}        