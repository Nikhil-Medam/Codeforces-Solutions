#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=2e5+5;
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
int a[N],b[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        b[i]=a[i+1]-a[i];
    }
    int min=b[0];
    for(int i=0;i<n-1;i++)
    {
        if(b[i]<min)
            min=b[i];
    }
    int k=0;
    for(int i=0;i<n-1;i++)
    {
        if(b[i]==min)
            k++;
    }
    cout<<min<<" "<<k;
    return 0;
}        