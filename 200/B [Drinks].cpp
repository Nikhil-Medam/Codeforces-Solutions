#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    ll sum=0;
    double ans;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }    
    ans=(double)sum/n;
    std::cout << std::fixed;
    std::cout << std::setprecision(9) << ans << '\n';
    return 0;
}        