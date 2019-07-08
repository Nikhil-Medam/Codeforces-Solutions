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
    int n,m;
    cin>>n>>m;
    int a[n],b[n],max=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%m==0)
            b[i]=a[i]/m;
        else
            b[i]=a[i]/m+1;
        if(b[i]>max)
            max=b[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        if(b[i]==max)
        {
            cout<<i+1;
            break;
        }
    }
    return 0;
}        