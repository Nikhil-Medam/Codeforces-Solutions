#include <bits/stdc++.h>

using namespace std;


int main()
{
    long long n,k,SUM=0;
    cin>>n>>k;
    long long a[n],t[n];
    long long i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>t[i];
        if(t[i]==1)
        {
            SUM=SUM+a[i];
            a[i]=0;
        }
    }
    long long sum=0,max=0;
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
    }
    max=sum;
    for(i=k;i<n;i++)
    {
        sum=sum+a[i]-a[i-k];
        if(sum>max)
        {
            max=sum;
        }
    }
    cout<<max+SUM;
    return 0;
}