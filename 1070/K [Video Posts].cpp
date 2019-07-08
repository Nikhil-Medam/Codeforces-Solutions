#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mp make_pair
#define ll long long
#define db double
#define pb push_back
#define ld long double
#define INF ll_MAX
#define M INT_MAX

const ll N = 2e5+3;
const ll mod = 1e9+7;

int gcd(int a,int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int visited[60]={0};

int n;

vector <int> m[60];

void dfs(int root)
{
	visited[root]=1;
	for(int i=0;i<m[root].size();i++)
	{
		int v = m[root][i];
		if(!visited[v])
		{
			dfs(v);
		}
	}
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
	vector <ll> v;

	ll n,a,k;
	cin>>n>>k;
	ll sum = 0;
	for(i=0;i<n;i++)
	{
		cin>>a;
		v.pb(a);
		sum+=a;
	}
	if(sum%k!=0)
	{
		cout<<"No";
		return 0;
	}
	ll val = sum/k;
	vector <ll> ans;
	sum = 0;
	ll noe = 0;
	for(i=0;i<n;i++)
	{
		sum+=v[i];
		noe++;
		if(sum==val)
		{
			ans.pb(noe);
			sum = 0;
			noe=0;
		}
		if(sum>val)
		{
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes"<<endl;
	for(i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}	