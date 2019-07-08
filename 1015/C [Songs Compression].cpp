#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,sum=0,s=0;
    cin>>n>>m;
    int a[n],b[n],d[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        d[i]=a[i]-b[i];
        sum=sum+a[i];
        s=s+b[i];
    }    
    sort(d,d+n);
    int ans=0;
    int k=n-1;
    while(sum>m&&k>=0)
    {
        sum=sum-d[k--];
        ans++;
    }
    if(s>m)
        cout<<"-1";
    else
        cout<<ans;
    return 0;
}        
