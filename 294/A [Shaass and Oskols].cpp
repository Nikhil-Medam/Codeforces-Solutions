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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        x--;
        a[x-1]=a[x-1]+y-1;
        a[x+1]=a[x+1]+a[x]-y;
        a[x]=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}