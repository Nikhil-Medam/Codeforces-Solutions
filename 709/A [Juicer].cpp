#include <bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    if(a>=b)
        return a;
    else 
        return b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,b,d;
    cin>>n>>b>>d;
    int a[n];
    int w=0,ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=b)
            w=w+a[i];
        if(w>d)
        {
            w=0;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}