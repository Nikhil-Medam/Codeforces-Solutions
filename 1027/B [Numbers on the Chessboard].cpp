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
    ll n,q;
    cin>>n>>q;
    if(n%2==1)
    {
        while(q--)
        {
            ll x,y;
            cin>>x>>y;
            ll p=(x-1)*n+y;
            if(p%2==1)
            {
                cout<<p/2+1<<endl;
            }
            else
            {
                cout<<p/2+n*n/2+1<<endl;
            }
        }
    }
    else
    {
        while(q--)
        {
            ll x,y;
            cin>>x>>y;
            if((x+y)%2==0)
            {
                ll p=(x-1)*n+y;
                cout<<(p+1)/2<<endl;
            }
            else
            {
                ll p=(x-1)*n+y;
                cout<<(p+1)/2+n*n/2<<endl;
            }
        }
    }
    return 0;
}        