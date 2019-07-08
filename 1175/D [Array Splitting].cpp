#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
int n,k,a[300005],ans;
int32_t main()
{
    IOS;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i],a[i]+=a[i-1];
    ans=k*a[n];
    sort(a+1,a+n);
    for(int i=1;i<=k-1;i++)
        ans-=a[i];
    cout<<ans;
    return 0;
}