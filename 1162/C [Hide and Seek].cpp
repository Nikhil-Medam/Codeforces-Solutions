#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
int n,m,a[100001],ans;
vector<int> v;
map<int,int> M1,M2,M3,M4;
int32_t main()
{
    IOS;
    cin>>n>>m;
    ans=n;
    for(int i=0;i<m;i++)
    {
    	cin>>a[i];
    	M1[a[i]]++;
    }
    for(int i=1;i<=n;i++)
    	if(!M1[i])
    		v.push_back(i);
    for(int i=0;i<m;i++)
    {
    	if(!M3[a[i]])
    		M3[a[i]]=i+1;
    	M4[a[i]]=i+1;
    }
    for(int i=0;i<m;i++)
    {
    	if(!M2[a[i]])
    		ans--,M2[a[i]]=1;
    	else
    		continue;
    }
    for(int i=1;i<=n;i++)
    	if(!M3[i])
    		M3[i]=1e9;
    for(int i=1;i<n;i++)
    	if(M4[i+1]<M3[i])
    		ans++;
    for(int i=2;i<=n;i++)
    	if(M4[i-1]<M3[i])
    		ans++;
    cout<<ans;
    return 0;
}