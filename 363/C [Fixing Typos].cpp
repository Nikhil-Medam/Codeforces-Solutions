#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int n,k=0;
    n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[0])
            k++;
    }
    if(k==n&&n>=2)
        cout<<s[0]<<s[0];
    else
        k=0;
    for(int i=0;i<n&&k==0;i++)
    {
        if(i+2>=s.length())
            break;
        if(s[i]==s[i+2]&&s[i+1]==s[i]&&i+2<s.length())
        {
            s.erase(i+1,1);
            i--;
        }
    }
    n=s.length();
    for(int i=0;i<n&&k==0;i++)
    {
        if(i+3>=s.length())
            break;
        if(s[i]==s[i+1]&&s[i+2]==s[i+3]&&i+3<s.length())
        {
            s.erase(i+2,1);
            i--;
        }
    }
    if(k==0)
        cout<<s;
    return 0;
}