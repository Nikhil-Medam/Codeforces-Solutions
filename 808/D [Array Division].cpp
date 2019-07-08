#include<bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mp make_pair
#define ll long long
#define db double
#define pb push_back
#define ld long double
#define INF ll_MAX
#define M LONG_LONG_MAX

const ll N = 2e5+3;
const ll mod = 1e9+7;


int main()
{
	 #ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
	#endif

	
	IOS
	ll i=0;
	vector <ll> v;
	

	ll n,k,a;
	cin>>n;
	ll sum = 0;
	for(i=0;i<n;i++)
	{
		cin>>a;
		sum+=a;
		v.pb(a);
	}
	ll tsum = sum;
	ll half = sum/2;
	if(sum%2==1)
	{
		cout<<"NO";
		return 0;
	}
	map <ll,ll> m;
	sum = 0;
	for(i=0;i<n;i++)
	{
		sum+=v[i];
		m[v[i]]=1;
		if(sum>=half)
		{
			if(sum==half)
			{
				cout<<"YES";
				return 0;
			}
			ll val = sum - half;
			if(m[val])
			{
				cout<<"YES";
				return 0;
			}
		}
	}
	m.clear();
	sum = 0;
	for(i=n-1;i>=0;i--)
	{
		sum+=v[i];
		m[v[i]]=1;
		if(sum>=half)
		{
			if(sum==half)
			{
				cout<<"YES";
				return 0;
			}
			ll val = sum - half;
			if(m[val])
			{
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
	return 0;
}