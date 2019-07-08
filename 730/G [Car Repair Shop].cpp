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

struct st
{
	ll s;
	ll d;
};

bool compare(st &s1,st &s2)
{
	if(s1.s!=s2.s)
		return s1.s<s2.s;
	return s1.d<s2.d;
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
	vector <ll> v,nz;

	ll n,a,t,s,d;
	st arr[300];
	st ans[300];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s>>d;
		arr[i].s=s;
		arr[i].d=d;
	}
	ll min = 1;
	st tmp[300];
	for(i=0;i<n;i++)
	{
		int flag = 0;
		ll l = arr[i].s,r = arr[i].s + arr[i].d-1;
		for(int j=0;j<i;j++)
		{
			ll l1 = ans[j].s,r1 = ans[j].d;
			if(!(l>r1||r<l1))
				flag = 1;
		}
		//cout<<i<<" "<<flag<<endl;
		int det = 0;
		if(flag==1)
		{
			if(i==0)
			{
				ans[i].s = min;
				ans[i].d = min + arr[i].d -1;
			}
			else
			{
				ll y = tmp[0].s-1;
				if(y>=arr[i].d)
				{
					min = 1;
					det = 1;
				}
				else
				{
					for(int j=0;j<i-1;j++)
					{
						ll x = tmp[j+1].s - tmp[j].d -1;
						if(x>=arr[i].d)
						{
							min = tmp[j].d + 1;
							det = 1;
							break;
						}
					}
				}
				if(det)
				{
					ans[i].s = min;
					ans[i].d = min + arr[i].d -1;
				}
				else
				{
					min = tmp[i-1].d + 1;
					ans[i].s = min;
					ans[i].d = min + arr[i].d -1;
				}
			}
		}
		else
		{
			ans[i].s = arr[i].s;
			ans[i].d = arr[i].s + arr[i].d -1;
		}
		for(int j=0;j<=i;j++)
		{
			tmp[j].s = ans[j].s;
			tmp[j].d = ans[j].d;
		}
		sort(tmp,tmp+i+1,compare);
		/*for(int j=0;j<=i;j++)
		{
			cout<<tmp[j].s<<" "<<tmp[j].d<<endl;
		}*/

	}
	for(i=0;i<n;i++)
	{
		cout<<ans[i].s<<" "<<ans[i].d<<endl;
	}
	return 0;
}	