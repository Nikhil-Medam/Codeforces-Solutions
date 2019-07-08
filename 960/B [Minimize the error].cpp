#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k1,k2;
    cin>>n>>k1>>k2;
    ll a[n],b[n],c[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
    {
        c[i]=a[i]-b[i];
        if(c[i]<0)
            c[i]=-c[i];
    }
    sort(c,c+n);
    ll k=k1+k2;
    while(k>0)
    {
        if(c[n-1]!=0)
            c[n-1]--;
        else
        {
            while(k>=2)
            {
                k--;
                k--;
            }
            if(k==1)
            {
                c[n-1]--;
            }
        }
        sort(c,c+n);
        k--;
    }
    ll e=0;
    for(int i=0;i<n;i++)
    {
        e=e+c[i]*c[i];
    }
    cout<<e;
    return 0;
}        