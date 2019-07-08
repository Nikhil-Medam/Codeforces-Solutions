#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int diff(int a,int b)
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
    int n;
    cin>>n;
    ll a[2*n];
    for(int i=0;i<2*n;i++)
        cin>>a[i];
    sort(a,a+2*n);
    ll x1,x2,y1,y2;
    x1=a[0];
    x2=a[n-1];
    y1=a[n];
    y2=a[2*n-1];
    ll ans=(x2-x1)*(y2-y1);
    ll diff=1000000000;
    for(int i=1;i<n;i++)
        if(a[i+n-1]-a[i]<diff)
            diff=a[i+n-1]-a[i];
    if(diff*(a[2*n-1]-a[0])<ans)
        ans=diff*(a[2*n-1]-a[0]);
    cout<<ans;    
    return 0;
}        
