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

	ll n,a,b;
	map <int,struct st> m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		m[i+1].left = a;
		m[i+1].right = b;
	}

	int visited[102]={0};
	int j = 0;
	ll idx = 0;
	for(i=0;i<n;i++)
	{

		if(!visited[i+1]&&m[i+1].left==0)
		{
			if(idx!=0)
			{
				m[idx].right = i+1;
				m[i+1].left = idx;
			}
			idx = i+1;
			st s = m[idx];
			while(s.right!=0)
			{
				visited[idx]=1;
				idx = s.right;
				s = m[s.right];
			}
		}	
	}



	for(i=0;i<n;i++)
	{
		cout<<m[i+1].left<<" "<<m[i+1].right<<endl;
	}

	return 0;
}	