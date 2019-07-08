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
ll min(ll a,ll b)
{
    if(a>=b)
        return b;
    else
        return a;
}
ll max(ll a,ll b)
{
    if(a>=b)
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
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        ll MAX=0,MIN=2000000000;
        if(i==0)
            MIN=diff(a[i+1],a[i]);
        else if(i==n-1)
            MIN=diff(a[i],a[i-1]);
        else
            MIN=min(diff(a[i],a[i-1]),diff(a[i],a[i+1]));
        if(i==0)
            MAX=diff(a[n-1],a[i]);
        else if(i==n-1)
            MAX=diff(a[i],a[0]);
        else
            MAX=max(diff(a[i],a[0]),diff(a[i],a[n-1]));    
        cout<<MIN<<" "<<MAX<<endl;
    }
}