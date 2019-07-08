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
    ll a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    ll s[n];
    s[0]=a[0];
    for(int i=1;i<n;i++)
        s[i]=s[i-1]+a[i];
    int k=0;
    for(int i=0;i<m;i++)
    {
        while(b[i]>s[k])
            k++;
        if(k>=1)
            cout<<k+1<<" "<<b[i]-s[k-1]<<endl;
        else
            cout<<k+1<<" "<<b[i]<<endl;
    }
    return 0;
}