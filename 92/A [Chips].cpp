#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int ans=0;
    int n,m;
    cin>>n>>m;
    while(m>n*(n+1)/2)
        m=m-n*(n+1)/2;
    while(m>ans*(ans+1)/2&&ans<=n)
        ans++;
    if(m<ans*(ans+1)/2)
    {
        ans--;
        cout<<m-ans*(ans+1)/2;
    }
    else
    {
        cout<<m-ans*(ans+1)/2;
    }
    return 0;
}        