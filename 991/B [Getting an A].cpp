#include <bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
    if(a<=b)
        return a;
    else
        return b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    double sum=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    double avg=(double)sum/n;
    if(avg>=4.5)
    {
        cout<<"0";
    }
    else
    {
        sort(a,a+n);
        double req;
        if(n%2==0)
        {
            req=4.5*n-sum;
        }
        else
        {
            req=4.5*n+0.5-sum;
        }
        int i;
        for(i=0;req>0;i++)
        {
            req=req-5+a[i];
        }
        cout<<i;
    }
    
    return 0;
}