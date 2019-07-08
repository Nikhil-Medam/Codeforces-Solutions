#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    char s[50];
    scanf("%s",s);
    int l=strlen(s);
    for(int i=0;i<l-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            ans++;
        }
    }
    ans++;
    ans=n-ans;
    cout<<ans;
    return 0;
}