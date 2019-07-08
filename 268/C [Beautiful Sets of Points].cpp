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
    int n,m;
    cin>>n>>m;
    if(n>m)
    {
        cout<<m+1<<endl;
        for(int i=0;i<=m;i++)
            cout<<n-m+i<<" "<<i<<endl;
    }
    else if(n==m)
    {
        cout<<m+1<<endl;
        for(int i=0;i<=m;i++)
            cout<<m-i<<" "<<i<<endl;
    }
    else
    {
        cout<<n+1<<endl;
        for(int i=0;i<=n;i++)
            cout<<i<<" "<<m-n+i<<endl;
    }
    return 0;
}        