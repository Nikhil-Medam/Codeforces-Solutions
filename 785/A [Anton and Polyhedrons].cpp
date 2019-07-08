#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll ans=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s[0]=='I')
            ans=ans+20;
        if(s[0]=='C')
            ans=ans+6;
        if(s[0]=='D')
            ans=ans+12;
        if(s[0]=='O')
            ans=ans+8;
        if(s[0]=='T')
            ans=ans+4;    
    }
    cout<<ans;
}        
