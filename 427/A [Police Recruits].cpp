#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    int a[n];
    int x=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(x==0&&a[i]==-1)
            ans++;
        if(a[i]!=-1&&x>=0)
            x=x+a[i];
        else if(x>0)
            x--;
    }
    cout<<ans;
    return 0;
}