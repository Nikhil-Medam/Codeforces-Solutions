// Author: πα

#include <bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define long long long

map<long, int> factorize(long x)
{
    long n = x;
    map<long, int> m;
    for(long i = 2; i*i <= n and x > 1; ++i)
        while(x % i == 0)
            m[i]++, x /= i;
    if(x > 1)
        m[x]++;
    return m;
}

int main()
{
    FastIO;
    int n, i, j;
    cin >> n;
    map<long, int> m = factorize(n);
    vector<long> v;
    for(auto it: m)
        v.push_back(it.first);
    if(v.size() < 2)
        return cout << "NO", 0;
    int f = v[0], g = v[1];
    for(i = (n-1)/f; i; i--)
        if((n-1 - f*i) % g == 0)
            return cout << "YES\n2\n" << i << ' ' << n/f << endl << (n-1 - f*i)/g << ' ' << n/g, 0;
    return 0;
}
