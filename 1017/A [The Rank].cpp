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
    ll sum=0;
    for(int i=0;i<4;i++)
    {
        int p;
        cin>>p;
        sum=sum+p;
    }
    int ans=1;
    n--;
    while(n--)
    {
        int p;
        ll s=0;
        for(int i=0;i<4;i++)
        {
            cin>>p;
            s=s+p;
        }
        if(s>sum)
            ans++;
    }
    cout<<ans;
    return 0;
}        