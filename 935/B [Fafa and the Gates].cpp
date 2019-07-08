#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[n];
    scanf("%s",s);
    int i,u=0,r=0,ans=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
            u++;
        }
        else
        {
            r++;
        }
        if(u==r+1&&s[i]=='U'&&s[i-1]=='U')
        {
            ans++;
        }
        if(r==u+1&&s[i]=='R'&&s[i-1]=='R')
        {
            ans++;
        }    
    }
    cout<<ans;
    return 0;
}