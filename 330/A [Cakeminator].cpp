#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int r,c;
    cin>>r>>c;
    char s[r][c];
    int a[r][c]={0};
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>s[i][j];
            if(s[i][j]=='S')
                a[i][j]=-1;
        }     
    }    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(s[i][j]=='S')
            {
                for(int k=0;k<c;k++)
                    a[i][k]=-1;
                for(int k=0;k<r;k++)
                    a[k][j]=-1;
            }
        }    
    }        
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int sum=0;
            for(int k=0;k<c;k++)
                if(s[i][k]=='S')
                    sum++;
            if(sum==0)
            {
                for(int k=0;k<c;k++)
                    a[i][k]=0;
            }
            sum=0;
            for(int k=0;k<r;k++)
                if(s[k][j]=='S')
                    sum++;
            if(sum==0)
            {
                for(int k=0;k<r;k++)
                    a[k][j]=0;
            }
        }
    }    
    int ans=0;    
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(a[i][j]==0)
                ans++;
    cout<<ans;            
    return 0;
}        