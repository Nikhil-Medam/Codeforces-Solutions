#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int w[n],a[m],i;
    for(i=0;i<n;i++)
    {
        cin>>w[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int j,ans=0;
    int c[n]={0};
    for(i=1;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[j]=0;
        }
        for(j=1;j<=i;j++)
        {
            if(a[i]!=a[i-j])
            {
                if(c[a[i-j]-1]==0)
                {
                    ans=ans+w[a[i-j]-1];
                    c[a[i-j]-1]++;
                }
            }
            else
            {
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}