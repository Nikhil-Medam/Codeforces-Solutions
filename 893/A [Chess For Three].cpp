

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    b[0]=3;
    int i,k=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]==3)
    {
       k=1;
    }
    else
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]==1&&b[i]==2)
            {
                b[i+1]=3;
            }
            else if(a[i]==1&&b[i]==3)
            {
                b[i+1]=2;
            }
            else if(a[i]==2&&b[i]==1)
            {
                b[i+1]=3;
            }
            else if(a[i]==2&&b[i]==3)
            {
                b[i+1]=1;
            }
            else if(a[i]==3&&b[i]==1)
            {
                b[i+1]=2;
            }
            else
            {
                b[i+1]=1;
            }
            
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]!=a[i]&&a[i+1]!=b[i])
        {
            k=1;
        }
    }
    if(a[0]!=a[1]&&a[1]!=3)
        {
            k=1;
        }
    
    if(n==1)
    {
        if(a[0]==1||a[0]==2)
        {
            k=0;
        }
    }    
    if(k==1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}
