#include<iostream>
using namespace std;
int main()
{
    int a,b,k;
    cin>>a>>b;
    if(a>b)
    {
        if(!(a==4&&b==2))
        {
            k=0;
            if(b==1)
            {
                k=1;
            }
            if(a==3&&b==2)
            {
                k=1;
            }
        }
        else
        {
            k=2;
        }
    }
    if(b>a)
    {
        if(!(a==2&&b==4))
        {
            k=1;
            if(a==1)
            {
                k=0;
            }
            if(b==3&&a==2)
            {
                k=0;
            }
        }
        else
        {
            k=2;
        }
    }
    if(a==b)
    {
        k=2;
    }
    if(k==0)
    {
        cout<<"<";
    }
    else if(k==1)
    {
        cout<<">";
    }
    else
    {
        cout<<"=";
    }
    return 0;
}