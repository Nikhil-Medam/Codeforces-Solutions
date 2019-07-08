#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
int n,m,h,a[50],ans;
int32_t main()
{
    IOS;
    cin>>n>>h>>m;
    for(int i=1;i<=n;i++)
    	a[i]=h;
    for(int i=0;i<m;i++)
    {
    	int l,r,x;
    	cin>>l>>r>>x;
    	for(int j=l;j<=r;j++)
    		a[j]=min(a[j],x);
    }
    for(int i=1;i<=n;i++)
    	ans+=a[i]*a[i];
    cout<<ans;
    return 0;
}