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
    int a[2];
    cin>>a[0]>>a[1];
    if(a[0]>a[1])
        swap(a[0],a[1]);
    int ans=0;
    int k=1;
    if(a[1]<=1&&a[0]<=1)
        k=0;
    while(k)
    {
        a[0]=a[0]+1;
        a[1]=a[1]-2;
        if(a[0]>a[1])
            swap(a[0],a[1]);
        ans++;
        if(a[1]<=1&&a[0]<=1)
        {
            k=0;
            ans--;
        }    
    }
    cout<<ans;
    return 0;
}        