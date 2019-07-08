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
    char s1[8][8];
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            cin>>s1[i][j];
    ll S=0,s=0;
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
        {
            if(s1[i][j]=='Q')
                S=S+9;
            if(s1[i][j]=='R')
                S=S+5;
            if(s1[i][j]=='B')
                S=S+3;
            if(s1[i][j]=='N')
                S=S+3;
            if(s1[i][j]=='P')
                S=S+1; 
            if(s1[i][j]=='q')
                s=s+9;
            if(s1[i][j]=='r')
                s=s+5;
            if(s1[i][j]=='b')
                s=s+3;
            if(s1[i][j]=='n')
                s=s+3;
            if(s1[i][j]=='p')
                s=s+1;    
        }
    if(S<s)
        cout<<"Black";
    else if(S==s)
        cout<<"Draw";
    else
        cout<<"White";
    return 0;
}        