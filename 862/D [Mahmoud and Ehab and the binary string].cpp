#include <bits/stdc++.h>
using namespace std;

string s;
int n, val, ham;
char def;

void setr(int l, int r)
{
    val = l;
    cerr << "l: " << l << endl;
	for(int i = 0; i < n; i++)
		s[i] = def;
	for(int i = l; i < r; i++)
		s[i] = '1' + '0' - def;
}

int query(string q)
{
	int x;
	cout << "? " << q << endl;
	cin >> x;
	return x;
}

void solve(int lo, int hi)
{
	int mid = (lo+hi)/2;
    cerr << lo << ' ' << mid << ' ' << hi << endl;
	setr(mid, hi);
    if(lo == mid)
        return;
	int cur = query(s);
	if(cur - ham == hi - mid)
		solve(lo, mid);
	else
		solve(mid, hi);
}

int main()
{
	int i, a, b;
	cin >> n;
	for(i = 0; i < n; i++)
		s += '0';
	a = query(s);
	s[0] = '1';
	b = query(s);
	def = char(a > b) + '0';
    int x = a > b;
    ham = (a > b) ? n-a : a;
    solve(0, n);
    cout << "! ";
    if(x)
        cout << val+1 << " " << 1 << endl;
    else
        cout << 1 << " " << val+1 << endl;
	return 0;
}