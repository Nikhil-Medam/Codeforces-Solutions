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
    ll ans=0,max=0;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        ans=ans+q-p;
        if(ans>max)
            max=ans;
    }
    cout<<max;
    return 0;
}        