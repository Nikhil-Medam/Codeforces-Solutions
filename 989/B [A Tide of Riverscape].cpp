#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    char s[n];
    int s1[n]={0};
    scanf("%s",&s);
    int i;
    int k=0;
    for(i=0;i<n;i++)
    {
        s1[i]=s[i]-48;
    }
    for(i=0;i<n-p;i++)
    {
        if(s[i]=='.'||s[i+p]=='.')
        {
            k=1;
            if(s[i]==s[i+p])
            {
                s1[i]=0;
                s1[i+p]=1;
                break;
            }
            else if(s[i]!='.')
            {
                if(s[i]=='0')
                {
                    s1[i+p]=1;
                }
                else
                {
                    s1[i+p]=0;
                }
                break;
            }
            else
            {
                if(s[i+p]=='0')
                {
                    s1[i]=1;
                }
                else
                {
                    s1[i]=0;
                }
                break;
            }
        }
        if(s[i]!=s[i+p])
        {
            k=1;
            break;
        }

    }
    if(k==0)
    {
        cout<<"No";
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(s1[i]==-2)
            {
                s1[i]=0;
            }
            cout<<s1[i];
        }
    }
    return 0;
}