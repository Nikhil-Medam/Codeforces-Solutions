#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    k--;
    int ans=0;
    for(int i=1;i<n;i++)
    {
        if(k-i>=0&&k+i<=n-1&&a[k-i]==1&&a[k+i]==1)
            ans=ans+2;
        else if(k-i>=0&&a[k-i]==1&&k+i>=n)
            ans++;
        else if(k+i<=n-1&&a[k+i]==1&&k-i<0)
            ans++;
    }
    if(a[k]==1)
        ans++;
    cout<<ans;
    return 0;
}