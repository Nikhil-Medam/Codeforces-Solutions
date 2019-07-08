#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll s=0,ans=0;
    for(int i=0;i<k;i++)
        s=s+a[i];
    ans=s;
    int p=1;
    for(int i=k;i<n;i++)
    {
        s=s+a[i]-a[i-k];
        if(s<ans)
        {
            ans=s;
            p=i-k+2;
        }    
    }
    cout<<p;
    return 0;
}        