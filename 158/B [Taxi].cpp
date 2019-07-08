#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[4];
    int i,j;
    for(i=0;i<4;i++)
    {
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]-1]++;
    }
    int car,m=0,p=0,q=0;
    car = b[3];
    if(b[2]>=b[0])
    {
        p=b[2];
        b[0]=0;
        if(b[1]%2==0)
        {
            q=b[1]/2;
        }
        else
        {
            q=b[1]/2+1;
        }
    }
    else
    {
        p=b[2];
        b[0]=b[0]-b[2];
        if(b[1]%2==0)
        {
            q=b[1]/2;
            if(b[0]%4==0)
            {
                m=b[0]/4;
            }
            else
            {
                m=b[0]/4+1;
            }
        }
        else
        {
            q=b[1]/2;
            if(b[0]>=2)
            {   
                b[0]=b[0]-2;
                if(b[0]%4==0)
                {
                m=b[0]/4+1;
                }
                else
                {
                m=b[0]/4+2;
                }
                
            }
            else
            {
                m=1;
            }
            
        }
    }
    cout<<car+p+q+m;
    return 0;
}