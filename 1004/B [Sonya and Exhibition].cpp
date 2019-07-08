#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,a,b;
    cin>>n>>m;
    while(m--)
        cin>>a>>b;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
            cout<<"1";
        else
            cout<<"0";
    }
    return 0;
}