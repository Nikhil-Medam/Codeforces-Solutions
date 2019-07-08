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
    string s;
    cin>>s;
    int h[2],m[2];
    h[0]=((int)s[0]-48);
    h[1]=((int)s[1]-48);
    m[0]=((int)s[3]-48);
    m[1]=((int)s[4]-48);
    if(h[1]*10+h[0]>m[0]*10+m[1])
    {
        if(h[1]>=6)
            cout<<h[0]+1<<0<<":"<<0<<h[0]+1;
        else
            cout<<h[0]<<h[1]<<":"<<h[1]<<h[0];
    }        
    else
    {
        if(h[0]*10+h[1]==23)
        {
            cout<<"00:00";
        }
        else
        {
            h[1]++;
            if(h[1]>=6)
                cout<<h[0]+1<<0<<":"<<0<<h[0]+1;
            else
                cout<<h[0]<<h[1]<<":"<<h[1]<<h[0];
        }
    }
    return 0;
}        