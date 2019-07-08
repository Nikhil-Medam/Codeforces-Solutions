#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k,r;
    cin>>k>>r;
    int t=0;
    int p=r,n=1;
    while(p%k!=0)
    {
        if(t%2==0)
        {
            p=n*10;
            n++;
        }
        else
        {
            p=p+r;
        }
        t++;
    }
    cout<<p/k;
    return 0;
}