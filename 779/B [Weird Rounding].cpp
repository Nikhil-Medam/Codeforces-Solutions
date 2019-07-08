#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k,n1;
    cin>>n>>k;
    n1=n;
    int ans=0;
    int a[20];
    for(int i=0;i<20;i++)
    {
        if(n1==0)
            a[i]=-1;
        else
        {
            a[i]=n1%10;
            n1=n1/10;
        }
    }
    int z=0;
    for(int i=0;i<20;i++)
    {
        if(a[i]!=-1)
        {
            if(a[i]==0)
                z++;
        }
    }
    if(z>=k)
    {
        while(k)
        {
        if(n%10==0)
        {
            k--;
            ans--;
        }
        ans++;
        n=n/10;
        }
    }
    else
    {
        int p=0;
        while(n)
        {
            if(n>=pow(10,p)&&n<pow(10,p+1))
            {
                break;
            }
            else
                p++;
        }
        ans=p;
    }
    cout<<ans;
    return 0;
}        