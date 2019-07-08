#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,t,A,B,d1,d2,b=0,k=0,i,j,s;
    cin>>x>>t>>A>>B>>d1>>d2;
    s=pow(t+1,2);
    int a[s];
    for(i=0;i<t;i++)
    {
        for(j=0;j<t;j++)
        {
            a[k]=A+B-d1*i-d2*j;
            k++;
        }
    }
    for(i=0;i<t;i++)
    {
        a[k]=A-d1*i;
        k++;
    }
    for(i=0;i<t;i++)
    {
        a[k]=B-d2*i;
        k++;
    }
    a[k]=0;
    for(i=0;i<s;i++)
    {
        if(x==a[i])
        {
            b=1;
            break;
        }
    }
    if(b==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}