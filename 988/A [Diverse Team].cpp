#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l=0,m=0,i,j;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(a[i]==a[i+j])
            {
                a[i+j]=0;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            m++;
        }
    }
    if(k<=m)
    {
        cout<<"YES"<<endl;
        for(i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                cout<<i+1<<" ";
                l++;
            }
            if(l==k)
            {
                break;
            }
        }
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}