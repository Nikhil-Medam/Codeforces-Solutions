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
int isLucky(int n)
{
    int n1=n;
    int d=0;
    while(n1)
    {
        d++;
        n1=n1/10;
    }
    int a[d];
    for(int i=d-1;i>=0;i--)
    {
        a[i]=n%10;
        n=n/10;
    }
    int k=1;
    for(int i=0;i<d;i++)
        if(a[i]!=4&&a[i]!=7)
            k=0;
    return k;        
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int MIN=min(n,m);
    if(MIN%2==0)
        cout<<"Malvika";
    else
        cout<<"Akshat";
    return 0;
}        