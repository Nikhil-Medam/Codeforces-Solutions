#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char s[4][4];
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            cin>>s[i][j];
    char t[2][2];
    int x=12;
    int m=0,n=0;
    while(x--)
    {
        int k=0;
        for(int i=m;i<m+2;i++)
            for(int j=n;j<n+2;j++)
                if(s[i][j]=='#')
                    k++;
        if(k<=1||k>=3)
        {
            x=0;
            break;
        }    
        n++;
        if(n==3)
        {
            n=0;
            m++;
        }
        if(m==3)
        {
            x=1;
            break;
        }    
    }
    if(x==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}        