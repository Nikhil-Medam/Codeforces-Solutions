#include<iostream>
using namespace std;
int main()
{
    int m,n,num;
    cin>>m>>n;
    num=(m/2*2)*(n/2*2);
    num=num/2;
    if(m%2!=0)
    {
        if(n%2!=0)
        {
            num=num+(m+n)/2-1;
        }
        else
        {
            num=num+n/2;
        }
    }
    else
    {
        if(n%2!=0)
        {
            num=num+m/2;
        }
    }
    cout<<num;
    return 0;
}