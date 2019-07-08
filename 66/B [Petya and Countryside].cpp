#include <bits/stdc++.h>
using namespace std;
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
    int s[n]={0};
    for(int i=0;i<n;i++)
        for(int j=1;j<n-i;j++)
        {
            if(a[i+j]<=a[i+j-1])
                s[i]++;
            else
                break;
        }
    for(int i=n;i>=0;i--)
        for(int j=1;j<=i;j++)
        {
            if(a[i-j]<=a[i-j+1])
                s[i]++;
            else
                break;
        }
    int max=0;
    for(int i=0;i<n;i++)
        if(s[i]>max)
            max=s[i];
    max++;
    cout<<max;
    return 0;
}