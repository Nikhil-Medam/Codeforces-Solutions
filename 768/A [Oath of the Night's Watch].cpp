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
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll min=1000000000,max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    for(int i=0;i<n;i++)
        if(a[i]==max)
            a[i]=-1;
        else if(a[i]==min)  
            a[i]=-1;
    int k=0;
    for(int i=0;i<n;i++)
        if(a[i]!=-1)
            k++;
    cout<<k;        
}