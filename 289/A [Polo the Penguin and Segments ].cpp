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
    ll x=0;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        x=x+q-p+1;
    }
    if(x%k!=0)
        cout<<k-x%k;
    else
        cout<<"0";
    return 0;
}        