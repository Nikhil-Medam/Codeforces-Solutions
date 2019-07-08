#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a[14],b[14];
    for(int i=0;i<14;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    long long ans=0;
    for(int i=0;i<14;i++)
    {
        long long p=0;
        b[i]=0;
        for(int j=0;j<14;j++)
        {
            b[j]=b[j]+a[i]/14;
        }
        int cnt=a[i]%14;
        for(int j=i;cnt!=0;j++)
        {
            if(j==13)
            {
                j=j-14;
            }
            b[j+1]++;
            cnt--;
        }
        for(int j=0;j<14;j++)
        {
            if(b[j]%2==0)
            {
                p=p+b[j];
            }
        }
        if(p>ans)
        {
            ans=p;
        }
        for(int j=0;j<14;j++)
        {
            b[j]=a[j];
        }
    }
    cout<<ans;
    return 0;
}