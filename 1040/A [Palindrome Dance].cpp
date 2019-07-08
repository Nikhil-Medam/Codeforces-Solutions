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
    ll n,x,y;
    cin>>n>>x>>y;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll s=0;
    int k=0;
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-1-i]&&a[i]!=2&&a[n-1-i]!=2)
            k=1;
        else
        {
            if(min(a[i],a[n-1-i])==0&&a[i]!=a[n-1-i])
                s=s+x;
            if(min(a[i],a[n-1-i])==1&&a[i]!=a[n-1-i])
                s=s+y;    
            if(min(a[i],a[n-1-i])==2)
                s=s+2*min(x,y);
        }
    }
    if(n%2==1&&a[n/2]==2)
        s=s+min(x,y);
    if(k==0)
        cout<<s;
    else
        cout<<-1;
    return 0;
}        