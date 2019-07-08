#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll max(ll a,ll b)
{
    if(a>=b)
        return a;
    else
        return b;
}
ll min(ll a,ll b)
{
    if(a>=b)
        return b;
    else
        return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    ll a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    b[0]=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]<=2*a[i-1])
            b[i]=b[i-1]+1;
        else
            b[i]=1;
    }
    int M=0;
    for(int i=0;i<n;i++)
        if(b[i]>M)
            M=b[i];
    cout<<M;        
    return 0;
}        