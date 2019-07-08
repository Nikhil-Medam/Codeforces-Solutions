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
    int n,k;
    cin>>n>>k;
    int m=1+k,M=1+2*k;
    int ans=0;
    int p=n/M;
    if(n%M>=m||n%M==0)
    {
        if(n%M==0)
            cout<<n/M<<endl;
        else
            cout<<n/M+1<<endl;;
        for(int i=k+1;i<n+1;i=i+2*k+1)
            cout<<i<<" ";
    }
    else
    {
        cout<<n/M+1<<endl;
        int d=n%M+M;
        int d1=d/2;
        int d2=d-d/2;
        for(int i=d1-k;i<n+1;i=i+2*k+1)
            cout<<i<<" ";
    }
    return 0;
}        