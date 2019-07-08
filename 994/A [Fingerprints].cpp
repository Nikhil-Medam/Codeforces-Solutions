#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m],c[10]={10,10,10,10,10,10,10,10,10,10};
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int k=0;
    int j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                c[k++]=j;
                break;
            }
        }
    }
    int d;
    sort(c,c+10);
    for(i=0;i<k;i++)
    {
        cout<<a[c[i]]<<" ";
    }
    return 0;
}