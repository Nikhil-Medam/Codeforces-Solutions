#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mp make_pair
#define ll long long
#define pb push_back
#define M LONG_LONG_MAX
#define IM INT_MAX
#define endl "\n"
#define double long double


const ll N = 2e5 + 5;
const ll mod = 1e9 + 7;

ll powOf4(ll a)
{
	return (1LL<<(2*a));
}

int32_t main()
{
	IOS

	ll i = 0;
	vector<ll> v;

	ll n, k, t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;

		ll sum = 1, z = 1;
		while(sum<=k && z<=n)
		{
			z++;
			sum = (1LL<<(z+1)) - 2 - z;
		}
		z--;
		ll noe = (1LL<<(z+1)) - 1;
		if(n>31)
		{
			cout<<"YES "<<n-z<<endl;
			continue;
		}
		ll val = (powOf4(n) - 1 - noe*(powOf4(n-z) - 1))/3;
		if(k<=val)
			cout<<"YES "<<n-z<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}