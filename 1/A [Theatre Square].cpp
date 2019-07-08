#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m,a;
    cin>>n>>m>>a;
    if(n%a==0)
    {
        n=n/a;
    }
    else
    {
        n=n/a+1;
    }
    if(m%a==0)
    {
        m=m/a;
    }
    else
    {
        m=m/a+1;
    }
    cout<<n*m;
    return 0;
}