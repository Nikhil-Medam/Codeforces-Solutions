#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double n,x,y;
    cin>>n>>x>>y;
    int ans=0;
    while((x+ans)/n<y/100)
        ans++;
    cout<<ans;    
    return 0;
}        