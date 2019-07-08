#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k1;
    cin>>n>>k1;
    int p[n],t[n];
    for(int i=0;i<n;i++)
        cin>>p[i]>>t[i];
    int k=0;
    while(k==0)
    {
        for(int i=0;i<n-1;i++)
        {
            if(p[i]<p[i+1])
            {
                swap(p[i],p[i+1]);
                swap(t[i],t[i+1]);
            }
            else if(p[i]==p[i+1]&&t[i]>t[i+1])
            {
                swap(p[i],p[i+1]);
                swap(t[i],t[i+1]);
            }
        }
        k=1;
        for(int i=0;i<n-1;i++)
        {
            if(p[i]<p[i+1])
            {
                k=0;
                break;
            }
            else if(p[i]==p[i+1]&&t[i]>t[i+1])
            {
                k=0;
                break;
            }
        }    
    }
    int ap,at,ans=0;
    ap=p[k1-1];
    at=t[k1-1];
    for(int i=0;i<n;i++)
    {
        if(p[i]==ap&&t[i]==at)
            ans++;
    }
    cout<<ans;
    return 0;
}        