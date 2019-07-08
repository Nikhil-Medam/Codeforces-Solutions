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
    ll a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    ll max=1,min=1000000000;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    int k=-1;
    for(int i=0;i<n;i++)
        if(a[i]==min&&b[i]==max)
            k=i+1;
    cout<<k;        
    return 0;
}        