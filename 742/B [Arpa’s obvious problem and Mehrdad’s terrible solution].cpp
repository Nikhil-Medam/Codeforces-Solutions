#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
int n,x,a[100005],ans;
map<int,int> M;
int32_t main()
{
    IOS;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    	M[a[i]]++;
    }
    if(!x)
    {	
    	for(auto it=M.begin();it!=M.end();it++)
    		ans+=(it->second)*(it->second-1)/2;
    	cout<<ans;
    	return 0;
    }
    for(int i=1;i<=n;i++)
    	ans+=M[a[i]^x];
    ans/=2;
    cout<<ans;
    return 0;
}