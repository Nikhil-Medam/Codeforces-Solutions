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
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    ll k=0;    
    for(int i=0;i<n;i++)
    {
        int k1=0;
        for(int j=0;j<n;j++)
            if(a[i]==a[j]&&b[i]<b[j])
            {
                k1++;
                break;
            }
        for(int j=0;j<n;j++)
            if(a[i]==a[j]&&b[i]>b[j])
            {
                k1++;
                break;
            }
        for(int j=0;j<n;j++)
            if(a[i]>a[j]&&b[i]==b[j])
            {
                k1++;
                break;
            }
        for(int j=0;j<n;j++)
            if(a[i]<a[j]&&b[i]==b[j])
            {
                k1++;
                break;
            }    
        if(k1==4)
            k++;
        k1=0;    
    }
    cout<<k;
    return 0;
    
}        