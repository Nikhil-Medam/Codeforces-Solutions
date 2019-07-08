#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    int a[18]={-1};
    int k=0;
    while(n)
    {
        a[k++]=n%10;
        n=n/10;
    }
    if(a[k-1]>4&&a[k-1]!=9)
        a[k-1]=9-a[k-1];
    for(int i=0;i<k-1;i++)
    {
        if(a[i]>4)
            a[i]=9-a[i];
    }
    for(int i=k-1;i>=0;i--)
        cout<<a[i];
    return 0;
}        
