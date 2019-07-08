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
ll rev(ll n)
{
    ll ans=0;
    while(n)
    {
        ans=ans*10+n%10;
        n=n/10;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string s[n+1];
    int a[n+1];
    for(int i=1;i<n+1;i++)
    {
        cin>>s[i];
        cin>>a[i];
        char c;
        cin>>c;
        if(c=='N')
        {
            if(s[i][0]=='>')
                s[i][0]='<';
            else
                s[i][0]='>';
            if(s[i][1]=='=')
                s[i][1]=' ';
            else
                s[i]=s[i]+'=';
        }
    }
    ll m=-1000000001,M=1000000001;
    for(int i=1;i<n+1;i++)
    {
        if(s[i][0]=='>')
        {
            if(s[i][1]=='=')
            {
                if(a[i]>m)
                    m=a[i];
            }
            else
            {
                if(a[i]+1>m)
                    m=a[i]+1;
            }
        }
        if(s[i][0]=='<')
        {
            if(s[i][1]=='=')
            {
                if(a[i]<M)
                    M=a[i];
            }
            else
            {
                if(a[i]-1<M)
                    M=a[i]-1;
            }
        }
    }
    if(M>=m)
    {
        cout<<(M+m)/2;
    }
    else
        cout<<"Impossible";
    return 0;
}        