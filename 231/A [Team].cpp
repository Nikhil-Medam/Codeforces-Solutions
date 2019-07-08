#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int ans=0;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}