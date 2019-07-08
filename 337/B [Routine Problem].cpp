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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a*d>=b*c)
    {
        int num=(a*d-b*c)/gcd(a*d-b*c,a*d);
        int den=(a*d)/gcd(a*d-b*c,a*d);
        cout<<num<<"/"<<den;
    }
    else
    {
        int num=(b*c-a*d)/gcd(b*c-a*d,b*c);
        int den=(b*c)/gcd(b*c-a*d,b*c);
        cout<<num<<"/"<<den;
    }
    return 0;
}        