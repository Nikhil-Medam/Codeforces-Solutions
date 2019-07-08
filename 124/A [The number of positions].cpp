#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,a,b;
    cin>>n>>a>>b;
    int ans=0;
    for(int i=1;i<n+1;i++)
    {
        if(i-1>=a&&n-i<=b)
            ans++;
    }
    cout<<ans;
    return 0;
}        