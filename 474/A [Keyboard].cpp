#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin>>c;
    string s1;
    cin>>s1;
    if(c=='R')
    {
        for(int i=0;i<s1.length();i++)
        {
            for(int j=0;j<s.length();j++)
            {
                if(s1[i]==s[j])
                    cout<<s[j-1];
            }
        }
    }
    else
    {
        for(int i=0;i<s1.length();i++)
        {
            for(int j=0;j<s.length();j++)
            {
                if(s1[i]==s[j])
                    cout<<s[j+1];
            }
        }
    }
}    