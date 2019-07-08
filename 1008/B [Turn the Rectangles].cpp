#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll max(ll a, ll b)
{
    if(a>=b)
        return a;
    else
        return b;
}
ll min(ll a, ll b)
{
    if(a<=b)
        return a;
    else
        return b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    ll w[n],h[n],t[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>w[i]>>h[i];
    }
    int k=0;
    t[0]=max(h[0],w[0]);
    for(int i=1;i<n;i++)
    {
        if(min(h[i],w[i])<=t[i-1])
            t[i]=min(h[i],w[i]);
        if(max(h[i],w[i])<=t[i-1])
            t[i]=max(h[i],w[i]);
        if(t[i]==0)
        {
            k=1;
            break;
        }
    }
    if(k==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}