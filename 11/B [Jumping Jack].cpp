#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll x;
    cin>>x;
    if(x<0)
        x=-x;
    ll p=0;
    while(p*(p+1)/2<x)
    {
        p++;
    }
    ll diff=p*(p+1)/2-x;
    if(diff%2==1)
        p++;
    diff=p*(p+1)/2-x;
    if(diff%2==1)
        p++;
    diff=p*(p+1)/2-x;
    if(diff%2==1)
        p++;    
    cout<<p;
    return 0;
}