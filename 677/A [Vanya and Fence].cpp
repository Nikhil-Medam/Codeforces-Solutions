#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,h;
    cin>>n>>h;
    int ans=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=h)
        {
            ans++;
        }
        else
        {
            ans=ans+2;
        }
    }
    cout<<ans;
    return 0;
}