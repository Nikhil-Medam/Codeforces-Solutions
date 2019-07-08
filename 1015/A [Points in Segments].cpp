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
    int a[m+1]={0};
    for(int i=0;i<n;i++)
    {
        int p,q;
        cin>>p>>q;
        for(int i=p;i<=q;i++)
            a[i]=1;
    }
    int ans=0;
    for(int i=0;i<m+1;i++)
    {
        if(a[i]==0)
            ans++;
    }
    cout<<ans-1<<endl;
    for(int i=1;i<m+1;i++)
    {
        if(a[i]==0)
            cout<<i<<" ";
    }
    return 0;
}        
