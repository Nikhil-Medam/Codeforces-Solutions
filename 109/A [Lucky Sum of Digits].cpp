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
    int k=0;
    int d;
    if(n%7==0)
    {
        for(int i=0;i<n/7;i++)
            cout<<7;
    }
    else
    {
        if(n>=7)
            d=n/7;
        else
            k=-1;
        while((n-d*7)%4!=0&&k!=-1)
        {
            d--;
            if(d==0)
                break;
        }
        for(int i=0;i<(n-7*d)/4&&(n-7*d)%4==0&&k!=-1;i++)
        {
            cout<<4;
            k=1;
        }    
        for(int i=0;i<d&&k!=-1;i++)
        {
            cout<<7;
            k=1;
        }
        if(n==4)
        {
            cout<<4;
            k=1;
        }
        if(k==0||k==-1)
            cout<<-1;
    }
    return 0;
}        