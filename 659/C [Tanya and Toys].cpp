#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,s=0,k=0,t;
    long long p=0,q=0;
    cin>>n>>m;
    t=m;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    q=a[0];
    for(i=1;m>=i;i++)
    {
        if(i>p&&i<q)
        {
            k++;
            m=m-i;
        }
        else
        {
            if(s<n-1)
            {
               p=a[s];
               s++;
               q=a[s];
            }
            else
            {
                p=a[n-1];
                q=9999999;
            }
        }
    }
    cout<<k<<endl;
    k=0;
    p=0;
    q=a[0];
    s=0;
    m=t;
    for(i=1;m>=i;i++)
    {
        if(i>p&&i<q)
        {
            cout<<i<<" ";
            k++;
            m=m-i;
        }
        else
        {
            if(s<n-1)
            {
               p=a[s];
               s++;
               q=a[s];
            }
            else
            {
                p=a[n-1];
                q=9999999;
            }
        }
    }
    return 0;
}