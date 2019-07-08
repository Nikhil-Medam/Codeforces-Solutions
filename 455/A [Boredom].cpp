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
    ll n;
    cin>>n;
    ll a[n],Max=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>Max)
            Max=a[i];
    }
    ll b[Max+1]={0};
    for(int i=0;i<n;i++)
        b[a[i]]++;
    for(int i=1;i<Max+1;i++)
        b[i]=i*b[i];
    ll c[Max+1];
    c[1]=b[1];
    if(n>1)
        c[2]=max(b[2],b[1]);
    for(int i=3;i<Max+1;i++)
        c[i]=max(c[i-2]+b[i],c[i-1]);
    cout<<c[Max];    
        
    return 0;
}        