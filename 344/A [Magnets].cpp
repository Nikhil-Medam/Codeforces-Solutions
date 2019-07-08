#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a,b=0,ans=0;
    while(n--)
    {
        cin>>a;
        if(a!=b)
        {
            ans++;
        }
        b=a;
    }
    cout<<ans;
    return 0;
}