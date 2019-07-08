#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a,b,c,count=1,p,i=1,k,s,t;
    cin>>a;
    p=a;
    while(p>pow(2,i))
    {
        i++;
    }
    while(a%2==0&&a>2)
    {
        a=a/2;
        count++;
    }
    if(count==1&&a<=2)
    {
        cout<<"-1";
    }
    else if(p!=pow(2,i))
    {
        s=pow(2,count-1);
        b=2*(a/2)*(a-a/2);
        b=b*s;
        c=(pow(a/2,2)+pow(a/2+1,2));
        c=c*s;
        cout<<b<<" "<<c;
    }
    else
    {
        if(i%2==0)
        {
            b=pow(pow(2,i/2),2)-pow(pow(2,i/2-1),2);
            c=pow(pow(2,i/2),2)+pow(pow(2,i/2-1),2);
        }
        else
        {
            i=i-1;
            b=pow(pow(2,i/2+1),2)-pow(pow(2,i/2-1),2);
            c=pow(pow(2,i/2+1),2)+pow(pow(2,i/2-1),2);
        }
        cout<<b<<" "<<c;
    }
    return 0;
}
