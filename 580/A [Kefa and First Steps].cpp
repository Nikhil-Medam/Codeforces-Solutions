#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int p=1,ans=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            p++;
        }    
        else
            p=1;
        if(p>ans)
            ans=p;    
    }
    cout<<ans;
    return 0;
}   