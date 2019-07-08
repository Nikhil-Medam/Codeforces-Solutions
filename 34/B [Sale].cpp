#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ll s=0;
    for(int i=0;i<m;i++)
    {
        if(a[i]<0)
            s=s-a[i];
    }
    cout<<s;
    return 0;
}        