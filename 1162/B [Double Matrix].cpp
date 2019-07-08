#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
int n,m,k,a[51][51],b[51][51];
int32_t main()
{
    IOS;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    	for(int j=1;j<=m;j++)
    		cin>>a[i][j];
    for(int i=1;i<=n;i++)
    	for(int j=1;j<=m;j++)
    	{
    		cin>>b[i][j];	
    		if(b[i][j]>a[i][j])
    		{
    			int t=a[i][j];
    			a[i][j]=b[i][j];
    			b[i][j]=t;
    		}	
    	}	
    for(int i=1;i<=n&&!k;i++)
    	for(int j=1;j<=m&&!k;j++)
    		if(a[i][j]<=a[i][j-1]||a[i][j]<=a[i-1][j]||b[i][j]<=b[i][j-1]||b[i][j]<=b[i-1][j])
    			k=1;
    if(k)
    	cout<<"Impossible";
    else
    	cout<<"Possible";			
    return 0;
}