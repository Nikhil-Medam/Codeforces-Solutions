#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int neg=0,pos=0,z=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
            pos++;
        else if(a[i]<0)
            neg++;
        else
            z++;
    }
    if(neg%2==1&&pos>0)
    {
        cout<<neg<<" ";
        for(int i=0;i<n;i++)
            if(a[i]<0)    
                cout<<a[i]<<" ";
        cout<<endl;
        cout<<pos<<" ";
        for(int i=0;i<n;i++)
            if(a[i]>0)
                cout<<a[i]<<" ";
        cout<<endl;
        cout<<z<<" ";
        while(z--)
            cout<<0<<" ";
    }
    else if(neg%2==1)
    {
        neg=neg-2;
        cout<<neg<<" ";
        int k=neg;
        for(int i=0;i<n&&k;i++)
            if(a[i]<0) 
            {
                cout<<a[i]<<" ";
                k--;
            }    
        cout<<endl;
        cout<<pos+2<<" ";
        for(int i=0;i<n;i++)
            if(a[i]>0)
                cout<<a[i]<<" ";
        k=2;
        for(int i=n-1;i>=0&&k;i--)
            if(a[i]<0)
            {
                cout<<a[i]<<" ";
                k--;
            }
        cout<<endl;
        cout<<z<<" ";
        while(z--)
            cout<<0<<" ";
    }
    else if(neg%2==0&&pos==0)
    {
        neg=neg-3;
        cout<<neg<<" ";
        int k=neg;
        for(int i=0;i<n&&k;i++)
            if(a[i]<0) 
            {
                cout<<a[i]<<" ";
                k--;
            }    
        cout<<endl;
        cout<<pos+2<<" ";
        for(int i=0;i<n;i++)
            if(a[i]>0)
                cout<<a[i]<<" ";
        k=3;
        for(int i=n-1;i>=0&&k;i--)
        {
            if(k==3&&a[i]<0)
                k--;
            else if(a[i]<0)
            {
                cout<<a[i]<<" ";
                k--;
            }
        }    
        cout<<endl;
        cout<<z+1<<" ";
        while(z--)
            cout<<0<<" ";
        k=1;
        for(int i=n-1;i>=0&&k;i--)
            if(a[i]<0)
            {
                cout<<a[i];
                k--;
            }
        
    }
    else
    {
        neg--;
        cout<<neg<<" ";
        int p;
        for(int i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                p=i;
                break;
            }
        }
        for(int i=p+1;i<n;i++)
            if(a[i]<0)
                cout<<a[i]<<" ";
        cout<<endl;
        cout<<pos<<" ";
        for(int i=0;i<n;i++)
            if(a[i]>0)    
                cout<<a[i]<<" ";
        cout<<endl;
        cout<<z+1<<" ";
        while(z--)
            cout<<0<<" ";
        cout<<a[p];    
        
    }
    return 0;
}        