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
    int k=0,b[n],p=0;    
    for(int i=1;i<n;i++)
    {
        if(a[i]==1)
        {
            k++;
            b[p++]=a[i-1];
        }
    }
    cout<<k+1<<endl;
    for(int i=0;i<p;i++)
        cout<<b[i]<<" ";
    cout<<a[n-1];
    return 0;
}