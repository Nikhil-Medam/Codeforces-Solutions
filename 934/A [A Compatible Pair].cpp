#include <bits/stdc++.h>
using namespace std;
long long max(long long a,long long b)
{
    if(a>=b)
        return a;
    else
        return b;
}
long long max(long long a,long long b,long long c)
{
    return max(max(a,b),c);
}
long long max(long long a,long long b,long long c,long long d)
{
    return max(max(a,b,c),d);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    long long a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    long long M=max(a[0]*b[0],a[0]*b[m-1],a[n-1]*b[0],a[n-1]*b[m-1]);
    if(M==a[0]*b[m-1])
    {
        cout<<a[1]*b[m-1];
    }
    else if(M==a[n-1]*b[0])
    {
        cout<<a[n-2]*b[0];
    }
    else if(a[n-1]*b[m-1]>=a[0]*b[0])
    {
        if(a[n-2]*b[m-1]>=a[0]*b[0])
            cout<<a[n-2]*b[m-1];
        else
            cout<<a[0]*b[0];
    }
    else
    {
        if(a[n-1]*b[m-1]>=a[1]*b[0])
            cout<<a[n-1]*b[m-1];
        else
            cout<<a[1]*b[0];
    }
    return 0;
}   