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
    int s=0,d=0;
    int x=0,y=n-1;
    int t=0;
    while(x<=y)
    {
        if(t%2==0)
        {
            s=s+max(a[x],a[y]);
            if(a[x]>=a[y])
                x++;
            else
                y--;
        }
        else
        {
            d=d+max(a[x],a[y]);
            if(a[x]>=a[y])
                x++;
            else
                y--;
        }
        t++;
    }
    cout<<s<<" "<<d;
    return 0;
}