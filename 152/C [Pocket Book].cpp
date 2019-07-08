#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    char s[m][n];
    string str;
    int z=n,k=0;
    while(z--)
    {
        cin>>str;
        for(int i=0;i<m;i++)
        {
            s[i][k]=str[i];
        }
        k++;
    }
    k=0;
    long long y=m,ans=1;
    long long d=1000000007;
    char s1[n];
    while(y--)
    {
        for(int i=0;i<n;i++)
            s1[i]=s[k][i];
        sort(s1,s1+n);
        int x=0;
        for(int i=0;i<n-1;i++)
        {
            if(s1[i]!=s1[i+1])
                x++;
        }
        x++;
        ans=(ans*x)%d;
        k++;
    }
    cout<<ans;
    return 0;
}