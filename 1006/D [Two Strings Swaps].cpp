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
    string s1,s2;
    cin>>s1>>s2;
    char s[4];
    ll ans=0;
    for(ll i=0;i<n/2;i++)
    {
        ll k=0;
        if(s2[i]==s1[i])
            k++;
        if(s2[i]==s1[n-1-i])
            k++;
        if(s2[n-1-i]==s1[i])
            k++;
        if(s2[n-1-i]==s1[n-1-i])
            k++;
        if(k==2&&s1[i]==s1[n-1-i])
            ans++;
        if(k==2&&s2[i]==s2[n-1-i])
            ans++;  
        if(k==1)
            ans++;
        if(k==0&&s2[i]==s2[n-1-i]&&s1[i]!=s1[n-1-i])
            ans++;
        if(k==0&&s2[i]!=s2[n-1-i])
            ans=ans+2;
    }
    if(n%2==1)
        if(s1[n/2]!=s2[n/2])
            ans++;
    cout<<ans;        
    return 0;
}