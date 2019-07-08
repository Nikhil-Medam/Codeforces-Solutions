#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int ans=0;
    n=n-10;
    if(n>0&&n<=11)
        ans=ans+4;
    if(n==10)
        ans=ans+11;
    cout<<ans;    
        
    return 0;
}        