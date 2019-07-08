#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll min(ll a,ll b)
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
    int n,f;
    cin>>n>>f;
    int a[n],b[n];
    ll s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        s=s+min(a[i],b[i]);
    }    
    int c[n];
    for(int i=0;i<n;i++)
    {
        c[i]=min(2*a[i],b[i])-min(a[i],b[i]);
    }
    sort(c,c+n);
    int k=n-1;
    while(f--)
    {
        s=s+c[k--];
        if(k==-1)
            break;
    }
    cout<<s;
    return 0;
}        