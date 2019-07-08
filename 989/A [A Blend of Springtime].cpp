#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[100];
    scanf("%s",s);
    int i,l;
    l=strlen(s);
    int k=0;
    for(i=0;i<l-2;i++)
    {
        if(s[i]!='.'&&s[i+1]!='.'&&s[i+2]!='.')
        {
            if(s[i]!=s[i+1]&&s[i]!=s[i+2]&&s[i+1]!=s[i+2])
            {
                k=1;
            }
        }
    }
    if(k==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}