#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,p;
    char a[n];
    scanf("%s",a);
    int k=1;
    for(i=0;i<n-1;i++)
    {
        if(a[i]=='1'&&a[i+1]=='1')
        {
            k=0;
            break;
        }
    }
    if(k!=0)
    {
        for(i=0;i<n-2;i++)
        {
            if(a[i]=='0')
            {
                if(a[i+1]=='0')
                {
                    if(a[i+2]=='0')
                    {
                        k=0;
                    }
                }
            }
        }
    }
    if(a[n-1]=='0'&&a[n-2]=='0')
    {
        k=0;
    }
    if(a[0]=='0'&&a[1]=='0')
    {
        k=0;
    }
    if(n==1&&a[0]=='0')
    {
        k=0;
    }
    if(k==0)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
    return 0;
}