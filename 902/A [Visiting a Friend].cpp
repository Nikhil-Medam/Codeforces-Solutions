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
    int n,m;
    cin>>n>>m;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    int k=0;
    if(a[0]!=0)
        k=1;
    int r;
    if(k==0)
    {
        r=b[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]<=r&&b[i]>r)
                r=b[i];
        }
        if(r<m)
            k=1;
    }
    if(k==1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}        