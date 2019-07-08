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
    int c[n],a[m];
    for(int i=0;i<n;i++)
        cin>>c[i];
    for(int i=0;i<m;i++)
        cin>>a[i];
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[k]>=c[i])
            k++;
        if(k==m)
            break;
    }
    cout<<k;
    return 0;
}