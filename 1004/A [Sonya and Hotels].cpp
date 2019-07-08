#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    long long d;
    cin>>n>>d;
    long long a[n];
    cin>>a[0];
    int ans=2;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]-a[i-1]==2*d)
        {
            ans++;
        }
        if(a[i]-a[i-1]>2*d)
            ans=ans+2;
    }
    cout<<ans;    
    return 0;
}