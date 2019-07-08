#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[50];
    scanf("%s",s);
    int n=strlen(s);
    int i;
    int k=0;
    for(i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            k=-1;
            break;
        }
    }
    if(k==0)
    {
        for(i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                k++;
            }
            else
            {
                break;
            }
        }
    }
    if(k==-1)
    {
        cout<<n;
    }
    else if(k==n-1)
    {
        cout<<"0";
    }
    else
    {
        cout<<n-1;
    }
    return 0;
}