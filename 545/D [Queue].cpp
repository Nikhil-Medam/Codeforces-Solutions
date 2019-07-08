#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],i,j=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long sum=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=sum)
        {
            j++;
            sum=sum+a[i];
        }
    }
    cout<<j;
    return 0;
}