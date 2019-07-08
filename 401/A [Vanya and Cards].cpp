#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x;
    cin>>n>>x;
    int a[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }    
    ll ans;
    ans=sum/x;
    if(ans<0)
        ans=-ans;
    if(sum%x!=0)
        ans++;
    cout<<ans;    
    return 0;
}        