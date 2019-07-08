
#include <iostream>

using namespace std;

int main()
{
    int n,i,sum=0,k=0,p,t=10;
    cin>>n;
    for(i=0;i<100000000;i++)
    {
        t=t+9;
        p=t;
        while(p>=1)
        {
            sum=sum+p%10;
            p=p/10;
        }
        if(sum==10)
        {
            k++;
            sum=0;
        }
        else
        {
            sum=0;
        }
        if(k==n)
        {
            cout<<t;
            break;
        }
        
    }
    return 0;
}
