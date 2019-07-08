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
    for(int i =0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ll s=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
            s=s+a[i];
    }
    ll s1=-1000000000,s2=-1000000000;
    if(s%2==1)
    {
        cout<<s;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]>0&&a[i]%2==1)
            {
                s1=s-a[i];
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]<0&&a[i]%2==-1)
            {
                s2=s+a[i];
                break;
            }
        }
        cout<<max(s1,s2);
    }
    return 0;
    
}        