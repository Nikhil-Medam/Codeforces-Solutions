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
    int k=0;
    for(ll i=0;i<n;i++)
        if(s[i]!='1'&&s[i]!='4')
        {
            k=1;
            break;
        }
    if(k==0)
    {
        for(int i=0;i<n-2;i++)
            if(s[i]==s[i+1]&&s[i]==s[i+2]&&s[i]=='4')
                {
                    k=1;
                    break;
                }
    }
    if(s[0]=='4')
        k=1;
    if(k==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}        