// Author: πα

#include <bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define long long long

const int N = 7;
int a[N];

int main()
{
    FastIO;
    int T;
    cin >> T;
    while(T--)
    {
        int n, i, k, ans, on, mn = N;
        cin >> k;
        for(i = 0; i < N; i++)
            cin >> a[i];
        on = accumulate(a, a+N, 0);
        ans = N*((k-1)/on);
        int ex = k - on*(ans/N);
        for(int init = 0; init < N; init++)
        {
            int sum = 0;
            for(i = 1; i <= N; i++)
            {
                sum += a[(init + i) % N];
                if(sum == ex)
                    mn = min(mn, i);
            }
        }
        cout << ans+mn << endl;

    }
    return 0;
}
