#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m,a,b;
    cin>>n>>m>>a>>b;
    long long k=n%m;
    long long ans=k*b;
    long long s=(m-k)*a;
    if(s<ans)
    {
        ans=s;
    }
    cout<<ans;
    return 0;
}