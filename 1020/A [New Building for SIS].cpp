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
    ll n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    while(k--)
    {
        ll t1,t2,f1,f2;
        cin>>t1>>f1>>t2>>f2;
        if(t1!=t2)
        {
            ll ans=0;
        ll p=f1;
        if(f1>b)
        {
            ans=diff(f1,b);
            p=b;
        }
        if(f1<a)
        {
            ans=diff(f1,a);
            p=a;
        }
        ans=ans+diff(t1,t2);
        ans=ans+diff(f2,p);
        cout<<ans<<endl;
        }
        else
            cout<<diff(f1,f2)<<endl;
        
    }
    return 0;
}        