#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
int n,l,a[20];
int32_t main()
{
    IOS;
    cin>>n;
    for(int i=1;i<=n;i++)
    	cin>>a[i];
    for(int i=n;i>=1;i/=2)
    	for(int j=1;i+j-1<=n;j+=i)
    	{
    		int p=1;
    		for(int k=j+1;k<i+j;k++)
    			if(a[k]<a[k-1])
    				p=0;
    		if(p)
    		{
    			cout<<i;
    			return 0;
    		}
    	}
    return 0;
}