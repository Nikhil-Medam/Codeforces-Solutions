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
    int max=1,min=1000000000;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    int m=0,M=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==max)
            M++;
        if(a[i]==min)
            m++;
    }
    if(max!=min)
        cout<<max-min<<" "<<(ll)m*M;
    else
        cout<<0<<" "<<((ll)m*(m-1))/2;
    return 0;
}        