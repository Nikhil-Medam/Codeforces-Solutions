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
    int max=a[0],min=a[0],ans=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            ans++;
        }
        if(a[i]<min)
        {
            min=a[i];
            ans++;
        }
    }
    cout<<ans;
    return 0;
}        