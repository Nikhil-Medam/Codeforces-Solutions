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

ll v1[N]={0};

ll binsearch(int n,int val)
{

	ll low = 0,high = n+1;
	while(low<high)
	{
		ll mid = (low+high)/2;
		if(v1[mid]>val)
		{
			low = mid + 1;
		}
		else
		{
			high = mid;
		}
	}
	if(low==n+1)
		return -1;
	return low;
}

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
	vector <ll> v[N];

	ll n,a;
	cin>>n;
	map <int,int> m;
	ll size = -1;
	for(i=0;i<n;i++)
	{
		cin>>a;
		ll val = binsearch(size,a);
		if(val==-1)
		{
			size++;
			v[size].pb(a);
			v1[size]=a;
		}
		else
		{
			v[val].pb(a);
			v1[val]=a;
		}

	}

	for(i=0;i<size+1;i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}	