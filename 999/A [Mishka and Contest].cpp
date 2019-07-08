#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=k)
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]<=k)
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    if(ans>n)
    {
        ans=n;
    }
    printf("%d",ans);
    return 0;
}