#include<iostream>
using namespace std;
int main()
{
    int a[5][5];
    int i,j,p,q;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                p=i;
                q=j;
            }
        }
    }
    int r,s;
    if(p>=2)
    {
        r=p-2;
    }
    else
    {
        r=2-p;
    }
    if(q>=2)
    {
        s=q-2;
    }
    else
    {
        s=2-q;
    }
    cout<<r+s;
    return 0;
}