#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[m],b[m],c[m];
    ll A[n+1]={0},B[n+1]={0};
    for(int i=0;i<m;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        A[a[i]]=A[a[i]]+c[i];
        B[b[i]]=B[b[i]]+c[i];
    }
    ll ans=0;
    for(int i=1;i<n+1;i++)
    {
        if(A[i]>B[i])
            ans=ans+A[i]-B[i];
    }
    cout<<ans;
    return 0;
}        