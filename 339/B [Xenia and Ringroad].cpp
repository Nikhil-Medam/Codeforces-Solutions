#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int max(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll a[m];
    int k=0;
    cin>>a[0];
    for(int i=1;i<m;i++)
    {
        cin>>a[i];
        if(a[i]<a[i-1])
            k++;
    }
    ll ans= k*n+a[m-1]-1;
    cout<<ans;    
    return 0;
}        