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
    sort(a,a+n);
    int k=0;
    if(n%2==0)
    {
        for(int i=0;i<n/2;i++)
            if(a[i]==a[i+n/2])
                k=1;
    }
    else
    {
        for(int i=0;i<=n/2;i++)
            if(a[i]==a[i+n/2+1])
                k=1;
        
    }
    if(k==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}        