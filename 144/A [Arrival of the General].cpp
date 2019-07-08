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
    int max=a[0],min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    int s,e;
    for(int i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            s=i;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[n-1-i]==min)
        {
            e=i;
            break;
        }
    }
    if(s<n-1-e)
        cout<<s+e;
    else
        cout<<s+e-1;
    return 0;
}        