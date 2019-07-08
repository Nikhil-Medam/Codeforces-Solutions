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
    ll  a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
        b[i]=a[i];
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]>a[k])
            k++;
    }
    cout<<k;
    return 0;
}