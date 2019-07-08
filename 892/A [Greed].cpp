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
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    sort(b,b+n);
    if(b[n-1]+b[n-2]>=sum)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}