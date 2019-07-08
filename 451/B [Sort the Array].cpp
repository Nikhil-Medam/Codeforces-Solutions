#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,q,k=0,l=0,s=0;
    cin>>n;
    long long a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        c[i]=a[i];
    }
    sort(b,b+n);
    for(i=0;i<n;i++)
    {
        if(b[i]==a[i])
        {
            l++;
        }
        b[i]=b[i]-a[i];
    }
    if(l!=n)
    {
        for(i=0;i<n;i++)
    {
        if(b[i]!=0)
        {
            p=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(b[i]!=0)
        {
            q=i;
            break;
        }
    }
    sort(c+p,c+q+1,greater<int>());
    for(i=p;i<q+1;i++)
    {
        if(a[i]==c[i])
        {
            s++;
        }
    }
    }
    
    if(l==n)
    {
        cout<<"yes"<<endl;
        cout<<"1 1";
    }
    else if(s==q-p+1)
    {
        cout<<"yes"<<endl;
        cout<<p+1<<" "<<q+1;
    }
    else
    {
        cout<<"no";
    }
    return 0;
}