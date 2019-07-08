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
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    int a[n]={0};
    int max=0;
    for(int j=0;j<m;j++)
    {
        max=0;
        for(int i=0;i<n;i++)
        {
            if((int)s[i][j]-48>max)
            {
                max=(int)s[i][j]-48;
            }
        }
        for(int i=0;i<n;i++)
        {
            if((int)s[i][j]-48==max)
            {
                a[i]=1;
            }
        }
        
    }
    int k=0;
    for(int i=0;i<n;i++)
        if(a[i]==1)
            k++;
    cout<<k;        
    return 0;
}        