#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    char c;
    cin>>c;
    char s[n+2][m+2];
    int a[26]={0};
    int ans=0;
    for(int i=0;i<n+2;i++)
        for(int j=0;j<m+2;j++)
            s[i][j]='.';
    for(int i=1;i<n+1;i++)
        for(int j=1;j<m+1;j++)
            cin>>s[i][j];
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(s[i][j]==c)
            {
                if(s[i-1][j]!=c&&s[i-1][j]!='.')
                    a[(int)s[i-1][j]-65]++;
                if(s[i+1][j]!=c&&s[i+1][j]!='.')
                    a[(int)s[i+1][j]-65]++;
                if(s[i][j-1]!=c&&s[i][j-1]!='.')
                    a[(int)s[i][j-1]-65]++;
                if(s[i][j+1]!=c&&s[i][j+1]!='.')
                    a[(int)s[i][j+1]-65]++;
            }
        }
    }
    for(int i=0;i<26;i++)
        if(a[i]!=0)
            ans++;
    cout<<ans;    
    return 0;
}        