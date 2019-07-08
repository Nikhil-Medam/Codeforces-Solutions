#include <bits/stdc++.h>
using namespace std;

#define long long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

long n;

int level(long x)
{
    int out = 0;
    while(x % 2 == 0)
    {
        out++;
        x /= 2;
    }
    return out;
}

long up(long x)
{
    if(x == n/2)
        return x;
    long y = x;
    int l = level(x);
    long a = x + (1LL << l), b = x - (1LL << l);
    if(level(a) == l + 1)
        return a;
    else
        return b;
}

long left(long x)
{
    if(level(x) == 0)
        return x;
    return x - (1LL << (level(x) - 1));
}

long right(long x)
{
    if(level(x) == 0)
        return x;
    return x + (1LL << (level(x) - 1));
}

int main()
{
    IOS;
    long q, a;
    cin >> n >> q;
    n++;
    while(q--)
    {
        cin >> a;
        string s;
        cin >> s;
        for(auto c: s)
        {
            if(c == 'U')
                a = up(a);
            if(c == 'L')
                a = left(a);
            if(c == 'R')
                a = right(a);
        }
        cout << a << endl;
    }
    return 0;
}