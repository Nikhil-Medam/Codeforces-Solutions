#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    int ans=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a==k||a==7-k||b==k||b==7-k)
            ans=1;
        if(ans==1)
            break;
    }
    if(ans==1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}        
