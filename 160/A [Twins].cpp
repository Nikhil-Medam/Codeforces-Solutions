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
    int a[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    sort(a,a+n);
    int s=0;
    for(int i=n-1;i>=0;i--)
    {
        s=s+a[i];
        if(s>sum/2)
        {
            cout<<n-i;
            break;
        }    
    }
        
}    