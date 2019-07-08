
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,n1,n2;
    cin>>n;
    n1=n;
    n2=n;
    int max=0,i,j,k=0;
    for(i=0;n1>=1;i++)
    {
        if(n1%10>max)
        {
            max=n1%10;
        }
        n1=n1/10;
        k++;
    }
    int a[max]={0};
    for(i=0;k>0;k--)
    {
        int p,q;
        q=pow(10,k-1);
        p=n2/q;
        for(j=0;j<p;j++)
        {
            a[j]++;
        }
        for(j=0;j<max;j++)
        {
            a[j]=a[j]*10;
        }
        n2=n2%q;
    }
    cout<<max<<endl;
    for(i=0;i<max;i++)
    {
        cout<<a[i]/10<<" ";
    }
    return 0;
}
