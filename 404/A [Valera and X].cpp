#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    char s[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)    
            cin>>s[i][j];
    int k=0;
    for(int i=0;i<n-1;i++)
        if(s[i][i]!=s[i+1][i+1])
        {
            k=1;
            break;
        }
    if(k==0)
    {
        for(int i=0;i<n-1;i++)
        if(s[i][n-1-i]!=s[i+1][n-i-2])
        {
            k=1;
            break;
        }
    }
    if(k==0)
    {
        char s1[n*n-2*n+1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==i)
                    continue;
                else if(j==n-1-i)
                    continue;
                else
                    s1[k++]=s[i][j];
            }
        }
        k=0;
        for(int i=0;i<n*n-2*n;i++)
            if(s1[i]!=s1[i+1])
            {
                k=1;
                break;
            }
    }
    if(k==0&&n>2)
    {
        if(s[0][0]==s[0][1])
            k=1;
    }
    if(k==1)
     cout<<"NO";
    else
     cout<<"YES";
    return 0;
}        
