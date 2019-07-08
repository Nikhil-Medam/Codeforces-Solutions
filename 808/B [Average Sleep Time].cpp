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
	

	ll n,k,sum=0;
	cin>>n>>k;

	for(i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		v.pb(a);
	}
	for(i=0;i<k;i++)
	{
		sum+=v[i];
	}
	ll ans = sum;
	for(i=k;i<n;i++)
	{
		sum-=v[i-k];
		sum+=v[i];
		ans += sum;
	}
	ld a = (ld)ans/(ld)(n-k+1);
	cout<<fixed;
	cout<<setprecision(10)<<a;
	return 0;
}