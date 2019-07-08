#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define endl "\n"

const ll N = 1e6 + 7;
const double PI = acos(-1);
ll mod = 1e9 + 7;


int32_t main()
{
    
    IOS
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    ll n;
    cin>>n;
    vector<pair<ll, ll>> vp;
    for(int i=0;i<4*n+1;i++)
    {
    	ll a, b;
    	cin>>a>>b;
    	vp.pb({a, b});
    }
    for(int i=0;i<4*n+1;i++)
    {
    	map<ll, ll> mpx, mpy;
    	for(int j=0;j<4*n+1;j++)
    	{
    		if(i == j)
    			continue;
    		ll x = vp[j].first, y = vp[j].second;
    		mpx[x]++;
    		mpy[y]++;
    	}
    	auto itf = mpx.begin();
    	auto itl = mpx.rbegin();
    	ll xfirst = itf->first, xlast = itl->first;
    	itf = mpy.begin();
    	itl = mpy.rbegin();
    	ll yfirst = itf->first, ylast = itl->first;
    	if(xlast - xfirst == ylast - yfirst)
    	{
    		int flag = 1;
    		// cout<<xlast<<" "<<xfirst<<" "<<ylast<<" "<<yfirst<<endl;
    		for(int k=0;k<4*n+1;k++)
    		{
    			if(k == i)
    				continue;
    			if(vp[k].first != xlast && vp[k].first != xfirst && vp[k].second != ylast && vp[k].second != yfirst)
    				flag = 0;
    		}
    		if(flag)
    		{
    			cout<<vp[i].first<<" "<<vp[i].second<<endl;
    			return 0;
    		}
    	}
    }
	return 0;
}
