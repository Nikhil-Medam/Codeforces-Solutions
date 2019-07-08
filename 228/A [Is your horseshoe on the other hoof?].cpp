#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);
    int ans=0;
    for(int i=0;i<3;i++)
        if(a[i]!=a[i+1])
            ans++;
    ans++;
    cout<<4-ans;
    return 0;
}