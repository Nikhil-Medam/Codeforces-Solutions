#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    for(int i=1;i<n-k;i++)
        cout<<i<<" ";
    for(int i=n;i>=n-k;i--)
        cout<<i<<" ";
    return 0;
}        