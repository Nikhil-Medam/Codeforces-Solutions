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
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
ll mod(ll a)
{
    if(a>=0)
        return a;
    else
        return -a;
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
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    char s[n+2][m+2],s1[n+2][m+2];
    for(int i=0;i<n+2;i++)
        for(int j=0;j<m+2;j++)
            s[i][j]='.';
    for(int i=1;i<n+1;i++)
        for(int j=1;j<m+1;j++)
            cin>>s[i][j];
    for(int i=1;i<n+1;i++)
    {
        if(i==1)
        {
            for(int j=1;j<m+1;j++)
            {
                if(j%2==0)
                    s1[i][j]='B';
                else
                    s1[i][j]='W';
            }
        }
        else
        {
            for(int j=1;j<m+1;j++)
            {
                if(s1[i-1][j]=='W')
                    s1[i][j]='B';
                else
                    s1[i][j]='W';
            }
        }
    }    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
            if(s[i][j]=='.')
                cout<<s1[i][j];
            else
                cout<<s[i][j];
        cout<<endl;
    } 
    return 0;
}        