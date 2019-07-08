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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a,b;
    cin>>a>>b;
    int A[3]={0},B[3]={0};
    while(a%2==0)
    {
        a=a/2;
        A[0]++;
    }
    while(a%3==0)
    {
        a=a/3;
        A[1]++;
    }
    while(a%5==0)
    {
        a=a/5;
        A[2]++;
    }
    while(b%2==0)
    {
        b=b/2;
        B[0]++;
    }
    while(b%3==0)
    {
        b=b/3;
        B[1]++;
    }
    while(b%5==0)
    {
        b=b/5;
        B[2]++;
    }
    if(a!=b)
        cout<<-1;
    else
    {
        ll ans=diff(A[0],B[0])+diff(A[1],B[1])+diff(A[2],B[2]);
        cout<<ans;
    }
    return 0;
}        