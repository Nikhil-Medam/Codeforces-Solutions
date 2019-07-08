#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll y,k,n;
    cin>>y>>k>>n;
    if(y+k-y%k>n)
        cout<<"-1";
    else
    {
        int ans=k-y%k;
        while(ans<=n-y)
        {
            cout<<ans<<" ";
            ans=ans+k;
        }
    }
    return 0;
}        