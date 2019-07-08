#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll max(ll a,ll b)
{
    if(a>=b)
        return a;
    else
        return b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length())
        cout<<max(s1.length(),s2.length());
    else
    {
        int k=0;
        for(int i=0;i<s1.length();i++)
            if(s1[i]!=s2[i])
            {
                k=1;
                break;
            }
        if(k==1)
            cout<<s1.length();
        else
            cout<<"-1";
    }
}