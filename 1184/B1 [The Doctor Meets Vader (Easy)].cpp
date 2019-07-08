// Author: πα

#include <bits/stdc++.h>
using namespace std;
#define long int64_t
const int INF = (1LL << 30) - 1;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n, m, i, d, g;
    cin >> n >> m;
    vector<int> v(n);
    vector<pair<int, int>> vv(m+1);
    for(i = 0; i < n; ++i)
        cin >> v[i];
    for(i = 1; i <= m; ++i)
        cin >> d >> g, vv[i] = {d, g};
    sort(vv.begin(), vv.end());
    for(i = 1; i <= m; ++i)
        vv[i].second += vv[i-1].second;
    for(auto it : v)
        cout << (upper_bound(vv.begin(), vv.end(), make_pair(it, INF)) - 1) -> second << ' ';
    return 0;
}
