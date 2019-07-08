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
    ll a[5]={0},b[5]={0};
    for(int i=0;i<5;i++)
        a[i]=n/5;
    for(int i=0;i<5;i++)
        b[i]=m/5;    
    for(int i=1;i<=n%5;i++)
        a[i]++;
    for(int i=1;i<=m%5;i++)
        b[i]++;  
    ll ans=0;
    for(int i=1;i<5;i++)
        ans=ans+a[i]*b[5-i];
    ans=ans+a[0]*b[0];    
    cout<<ans;    
    return 0;
}        
