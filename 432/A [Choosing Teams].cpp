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
    int a[n];
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=5-k)
            ans++;
    }
    cout<<ans/3;    
    return 0;
}        