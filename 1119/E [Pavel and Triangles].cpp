#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define min(a,b) (a<b?a:b)
int n,s,a[300005],ans;
int32_t main()
{
    IOS;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	int p=min(s,a[i]/2);
    	ans+=p;
    	a[i]-=2*p;
    	ans+=a[i]/3;
    	a[i]%=3;
    	s+=a[i]-p;
    }
    cout<<ans;
    return 0;
}