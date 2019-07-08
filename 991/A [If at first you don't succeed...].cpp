#include <bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
    if(a<=b)
        return a;
    else
        return b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int k=0;
    if(c>min(a,b))
    {
        k=-1;
    }
    else
    {
        a=a-c;
        b=b-c;
    }
    if(a+b+c+1<=n&&k==0)
    {
        cout<<n-a-b-c;
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}