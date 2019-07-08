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

	ll n,a,k,ans=0;
	cin>>n>>k;
	ll sum = 0;
	ll prevval =-1,val = 0,mod = 0;
	for(i=0;i<n;i++)
	{
		cin>>a;
		sum+=a;
		prevval = mod;
		if(prevval!=0&&sum%k>=a)
		{
			ans++;
			sum = 0;
			mod = 0;
		}
		else
		{
			val = sum/k;
			mod = sum%k;
			ans += val;
			sum -= val*k;
		}
		
	}
	if(sum>0)
		ans++;
	cout<<ans;
	return 0;
}	