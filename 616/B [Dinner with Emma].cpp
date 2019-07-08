#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    long long a[n][m+1];
    for(int i=0;i<n;i++)
    {
        long long min=1000000000;
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]<=min)
            {
                min=a[i][j];
                a[i][m]=min;
            }
        }
    }    
    long long max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i][m]>max)
            max=a[i][m];
    }
    cout<<max;
    return 0;
}   