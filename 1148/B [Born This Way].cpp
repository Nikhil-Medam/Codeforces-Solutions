#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
int n,m,ta,tb,k,a[200005],b[200005],x,ans;
int32_t main()
{
    IOS;
    cin>>n>>m>>ta>>tb>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
        cin>>b[i];    
    if(k>=n)
    {
    	cout<<-1;
    	return 0;
    }
    for(int i=1;i<=k+1;i++)
    {
    	int x=(lower_bound(b+1,b+m+1,a[i]+ta)-b-1)+(k+1-i)+1;
    	if(x>m)
    	{
    		cout<<-1;
    		return 0;
    	}
    	ans=max(ans,b[x]);
    }
    cout<<ans+tb;
    return 0;
}