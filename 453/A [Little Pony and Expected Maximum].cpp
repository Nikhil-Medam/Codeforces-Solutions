#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll m,n;
    cin>>m>>n;
    double ans=m;
    for(int i=1;i<m;i++)
        ans=ans-pow((double)i/m,n);
    std::cout << std::fixed;
    std::cout << std::setprecision(9) << ans << '\n';
    return 0;
}        