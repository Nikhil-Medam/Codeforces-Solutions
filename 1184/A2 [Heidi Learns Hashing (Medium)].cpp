#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define endl "\n"

const ll N = 1e6 + 7;
const double PI = acos(-1);
ll mod = 1e9 + 7;

vector<ll> divisors;

void getDivisors(ll n)
{
	divisors.clear();
	for(int i=1;i*i<=n;i++)
	{
		if(n % i == 0)
		{
			divisors.pb(i);
			if(n/i != i)
				divisors.pb(n/i);
		}
	}
}

int32_t main()
{
    
    IOS
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
   	ll n;
   	cin>>n;
   	string str;
   	cin>>str;
   	getDivisors(n);
   	map<int, int> mpd;
   	for(int i=0;i<divisors.size();i++)
   	{
   		ll d = divisors[i];
   		int flag = 1;
   		for(int j=0;j<d;j++)
   		{
   			ll start = j;
	   		ll xorsum = str[start] - '0';
	   		for(int k=0;k<n/d-1;k++)
	   		{
	   			start += d;
	   			start %= n;
	   			xorsum ^= str[start] - '0';
	   		}
	   		if(xorsum)
	   		{
	   			mpd[d] = -1;
	   			flag = -1;
	   			break;
	   		}
   		}
   		mpd[d] = flag;
   	}
   	ll cnt = 0;
   	for(ll i=1;i<=n;i++)
   	{
   		ll g = __gcd(i, n);
   		// cout<<mpd[g]<<" "<<endl;
   		if(mpd[g] == 1)
   			cnt++;
   	}
   	cout<<cnt<<endl;
	return 0;
}
