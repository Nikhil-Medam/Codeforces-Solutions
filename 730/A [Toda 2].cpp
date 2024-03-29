// Author: πα

#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define long long long

const int N = 105;
pair<int, int> a[N];
char s[N];
vector<string> v;

int main()
{
    IOS;
    int n, i, k;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a+n);
    reverse(a, a+n);

    while(a[0].first != a[n-1].first)
    {
        string s = "";
        for(i = 0; i < n; i++)
            s += '0';

        for(k = 0; k < n; k++)
            if(a[0].first != a[k].first)
                break;

        if(k < 2)
            k = 2;

        if(k % 2)
        {
            a[0].first--;
            a[1].first--;
            a[2].first--;
            s[a[0].second] = '1';
            s[a[1].second] = '1';
            s[a[2].second] = '1';
        }
        else
        {
            a[0].first--;
            a[1].first--;
            s[a[0].second] = '1';
            s[a[1].second] = '1';
        }

        for(i = 0; i < n; i++)
            if(a[i].first < 0)
                a[i].first = 0;

        v.push_back(s);
        sort(a, a+n);
        reverse(a, a+n);
    }
    cout << a[0].first << endl;
    cout << v.size() << endl;
    for(auto s: v)
        cout << s << endl;
    return 0;
}
