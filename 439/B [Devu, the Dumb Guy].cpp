#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ll s=0;
    for(int i=0;i<n;i++)
    {
        s=s+a[i]*x;
        if(x!=1)
            x--;
    }
    cout<<s;
    return 0;
}        