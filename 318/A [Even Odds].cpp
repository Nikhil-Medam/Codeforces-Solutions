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
    if(k<=(n+1)/2)
        cout<<2*k-1;
    else
    {
        k=k-(n+1)/2;
        cout<<2*k;
    }
    
}    