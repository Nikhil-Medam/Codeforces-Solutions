#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    sort(a,a+m);
    int ans=1000;
    for(int i=0;i<m-n+1;i++)
    {
        if(a[i+n-1]-a[i]<ans)
        {
            ans=a[i+n-1]-a[i];
        }
    }
    cout<<ans;
    return 0;
}   