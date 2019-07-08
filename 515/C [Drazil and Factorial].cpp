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
    ll d;
    cin>>d;
    ll n;
    cin>>n;
    ll a[d];
    for(int i=d-1;i>=0;i--)
    {
        a[i]=n%10;
        n=n/10;
    }
    ll b[40*d];
    for(int i=0;i<40*d;i++)
        b[i]=-1;
    int k=0;
    for(int i=0;i<d;i++)
    {
        if(a[i]==2||a[i]==3||a[i]==5||a[i]==7)
            b[i+k]=a[i];
        if(a[i]==4)
        {
            b[i+k]=3;
            k++;
            b[i+k]=2;
            k++;
            b[i+k]=2;
            k++;
        }
        if(a[i]==6)
        {
            b[i+k]=5;
            k++;
            b[i+k]=3;
            k++;
        }
        if(a[i]==8)
        {
            b[i+k]=7;
            k++;
            b[i+k]=2;
            k++;
            b[i+k]=2;
            k++;
            b[i+k]=2;
            k++;
        }
        if(a[i]==9)
        {
            b[i+k]=7;
            k++;
            b[i+k]=3;
            k++;
            b[i+k]=3;
            k++;
            b[i+k]=2;
            k++;
        }
    }
    sort(b,b+40*d);
    for(int i=0;i<40*d;i++)
        if(b[40*d-1-i]!=-1)    
            cout<<b[40*d-1-i];
    return 0;
}        