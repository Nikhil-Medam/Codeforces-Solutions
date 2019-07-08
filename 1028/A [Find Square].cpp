#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll max(ll a,ll b)
{
    if(a>=b)
        return a;
    else
        return b;
}
ll min(ll a,ll b)
{
    if(a>=b)
        return b;
    else
        return a;
}
void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];
 

    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    sort(pairt, pairt + n);

    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    char s[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>s[i][j];
    int x1,y1,x2,y2,x3,y3,x4,y4;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(s[i][j]=='B')
            {
                x1=i+1;
                y1=j+1;
                break;
            }
    for(int i=0;i<n;i++)
        for(int j=m-1;j>=0;j--)
            if(s[i][j]=='B')
            {
                x2=i+1;
                y2=j+1;
                break;
            }  
    for(int i=n-1;i>=0;i--)
        for(int j=0;j<m;j++)
            if(s[i][j]=='B')
            {
                x3=i+1;
                y3=j+1;
                break;
            }
    for(int i=n-1;i>=0;i--)
        for(int j=m-1;j>=0;j--)
            if(s[i][j]=='B')
            {
                x4=i+1;
                y4=j+1;
                break;
            }        
    int X=(x1+x2+x3+x4)/4,Y=(y1+y2+y3+y4)/4;
    cout<<X<<" "<<Y;
    return 0;
}        