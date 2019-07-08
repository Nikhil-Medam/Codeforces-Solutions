#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m,ans;
    cin>>n>>m;
    if(m<=n/2)
        ans=m+1;
    else
        ans=m-1;
    if(ans==0)
        ans=1;
    cout<<ans;    
}   