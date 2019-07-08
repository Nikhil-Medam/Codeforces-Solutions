#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mp make_pair
#define ll long long
#define db double
#define pb push_back
#define ld double
#define INF ll_MAX
#define M LONG_LONG_MAX
#define IM INT_MAX

const ll N = 2e5+3;
const ll mod = 998244353;


int main()
{
	IOS
	
	ll i=0;
	vector <ll> v;

	ll n;
	string str = "a1 a2 a3 a4 a5 a6 a7 a8 b8 b7 b6 b5 b4 b3 b2 b1 c1 c2 c3 c4 c5 c6 c7 c8 d8 d7 d6 d5 d4 d3 d2 d1 e1 e2 e3 e4 e5 e6 e7 e8 f8 f7 f6 f5 f4 f3 f2 f1 h1 g1 g2 h2 h3 g3 g4 h4 h5 g5 g6 h6 h7 g7 g8 h8";
	cin>>n;
	if(n==62)
	{
		cout<<   "a1 a2 a3 a4 a5 a6 a7 a8 b8 b7 b6 b5 b4 b3 b2 b1 c1 c2 c3 c4 c5 c6 c7 c8 d8 d7 d6 d5 d4 d3 d2 d1 e1 e2 e3 e4 e5 e6 e7 e8 f8 f7 f6 f5 f4 f3 f2 f1 g1 h1 h2 g2 g3 h3 h4 g4 g5 h5 h6 g6 g7 h7 h8";
		return 0;
	}
	ll k = 0;
	for(i=0;i<n-1;i++)
	{
		cout<<str[k]<<str[k+1]<<" ";
		k+=3;
	}
	k-=3;
	if(str[k]=='h')
	{
		cout<<"h7 h8";
	}
	else
	if(str[k]=='g')
	{
		cout<<"g8 h8";
	}
	else
	if(str[k+1]=='8')
	{
		cout<<"g8 h8";
	}
	else
	{
		cout<<'h'<<str[k+1]<<" h8";
	}

}