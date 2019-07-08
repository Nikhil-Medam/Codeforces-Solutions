#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    ll n=s.length();
    ll ans=0;
    int p=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='4'||s[i]=='7')
            ans++;
    }
    if(ans==0)
        p=1;
    if(ans>0)
    {
        char s1[20];
    ll k=0;
    while(ans)
    {
        s1[k++]=(char)(ans%10+48);
        ans=ans/10;
    }
    
    for(ll i=0;i<k;i++)
        if(s1[i]!='4'&&s1[i]!='7')
            {
                p=1;
                break;
            }
    }
    
    if(p==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}        