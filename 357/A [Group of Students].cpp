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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x,y;
    cin>>x>>y;
    int b[n],c[n];
    b[0]=a[0];
    c[n-1]=a[n-1];
    for(int i=1;i<n;i++)
        b[i]=b[i-1]+a[i];
    for(int i=n-2;i>=0;i--)
        c[i]=c[i+1]+a[i];
    int ind=-1;
    for(int i=0;i<n-1;i++)
    {
        if(b[i]>=x&&b[i]<=y&&c[i+1]>=x&&c[i+1]<=y)
            ind=i+1;
    }
    cout<<ind+1;
    return 0;
}        