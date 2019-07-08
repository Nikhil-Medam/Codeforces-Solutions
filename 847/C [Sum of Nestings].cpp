#include <bits/stdc++.h>

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

struct st
{
	int left;
	int right;
};
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

	ll n,k;
	cin>>n>>k;
	ll val = n*(n-1)/2;
	if(k>val)
	{
		cout<<"Impossible";
		return 0;
	}
	ll val2 = val - k;
	string str,finalans;
	while(val2>n-1)
	{
		finalans.pb('(');
		finalans.pb(')');
		val2 -= n-1;
		n--;
	}

	for(i=0;i<n;i++)
	{
		str.pb('(');
	}
	for(i=0;i<n;i++)
	{
		str.pb(')');
	}

	string ans;

	for(i=0;i<n-val2;i++)
	{
		ans.pb(str[i]);
	}
	ans.pb(')');
	for(;i<2*n-1;i++)
		ans.pb(str[i]);
	
	cout<<finalans + ans;
	return 0;
}	