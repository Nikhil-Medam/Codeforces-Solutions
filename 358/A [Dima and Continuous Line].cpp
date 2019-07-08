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
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n<4)
        cout<<"no";
    else
    {
        int k=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+2;j<n-1;j++)
            {
                int x1,x2,x3,x4;
                x1=min(a[i],a[i+1]);
                x2=max(a[i],a[i+1]);
                x3=min(a[j],a[j+1]);
                x4=max(a[j],a[j+1]);
                if(x1<x3&&x3<x2&&x2<x4)
                    k=1;
                if(x3<x1&&x1<x4&&x4<x2)
                    k=1;
            }
        }
        if(k)
            cout<<"yes";
        else
            cout<<"no";
    }
    return 0;
}        