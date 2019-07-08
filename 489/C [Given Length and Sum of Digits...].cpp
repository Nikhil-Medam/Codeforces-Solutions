#include <bits/stdc++.h>
using namespace std;
int a[100],b[100];
int ltos(int n,int a[])
{
    int d=1,l;
    if(a[n-1]!=0)
    {
        for(int i=0;i<n;i++)
        {
            b[i]=a[n-1-i];
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            b[i]=a[n-1-i];
        }
        b[0]++;
        for(int i=1;i<n;i++)
        {
            if(b[i]!=0)
            {
                b[i]--;
                break;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,sum,s;
    cin>>n>>sum;
    s=sum;
    int small=0,large=0;
    int k=0;
    if(sum>9*n||sum==0)
    {
        k=-1;
    }
    int x=0;
    if(k==0&&n>1)
    {
     if(sum>=9)
     {
         a[x++]=9;
         sum=sum-9;
     }
     while(sum>=9)
     {
         a[x++]=9;
         sum=sum-9;
     }
     if(large<pow(10,n-1))
     {
         a[x++]=sum;
         sum=0;
     }
     small=ltos(n,a);
    }
    if(k!=0&&!(n==1&&s==0))
    {
        cout<<"-1"<<" "<<"-1";
    }
    if(n==1&&s==0)
    {
        cout<<"0"<<" "<<"0";
    }
    if(s==1&&n>1&&k==0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i];
        }
        cout<<" ";
        for(int i=0;i<n;i++)
        {
            cout<<a[i];
        }
    }
    else if(n>1&&k==0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<b[i];
        }
        cout<<" ";
        for(int i=0;i<n;i++)
        {
            cout<<a[i];
        }
    }
    if(n==1&&k==0)
    {
        small=s;
        large=s;
        cout<<small<<" "<<large;
    }
    return 0;
}